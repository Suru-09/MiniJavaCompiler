#include <iostream>

#include "MiniJavaParser.h"
#include "CharStream.h"
#include "MiniJavaParserTokenManager.h"
#include "ErrorHandler.h"

int main(int argc, char* argv[]) {
    std::string codeExampleThatShouldWork = R"(
class Main {
    public static void main(String[] args) {
        System.out.println(5);
    }
}

class SPL {
    int ciocan;
    bool nicovala;
}
)";

std::string codeExampleThatShouldNotWork = R"(
class Main {
    public static void main(String[] args) {
        System.out.println(5
    }
}
)";

    CharStream *stream = new CharStream(codeExampleThatShouldWork.c_str(), codeExampleThatShouldWork.size(), 0, 0);
    MiniJavaParserTokenManager *scanner = new MiniJavaParserTokenManager(stream);
    MiniJavaParser parser(scanner);
    parser.setErrorHandler(new ErrorHandler());
    parser.Program();
    return 0;
}