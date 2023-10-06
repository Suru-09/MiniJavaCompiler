class VariableDeclaration {
    public static void main(String[] args) {
        System.out.println(1 + 2 * 3);
    }
}

class DummyClass {
    public int method() {
        return 1;
    }
}

class AnotherClass2 {
    int aInteger;
    int[] arrayOfInts;
    DummyClass identifierForClass;
    DummyClass[] arrayOfAnotherClass;
    boolean aBoolean;

    public int method() {
        return 2;
    }

    public int testVariableDeclaration() {

        // access the variables
        aInteger = 1;
        arrayOfInts = new int[1];
        identifierForClass = new DummyClass();
        arrayOfAnotherClass = new DummyClass[1];
        aBoolean = true;

        return 5;
    }
}
