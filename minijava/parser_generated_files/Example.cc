/* Example.cc */
#include "Example.h"
#include "TokenMgrError.h"
  unsigned int jj_la1_0[] = {
0x6,0x6,0x8,};

  /** Constructor with user supplied TokenManager. */



void Example::Input() {
    if (!hasError) {
    MatchedBraces();
    }
    if (!hasError) {
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 1:
      case 2:{
        ;
        break;
        }
      default:
        jj_la1[0] = jj_gen;
        goto end_label_1;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 1:{
        if (!hasError) {
        jj_consume_token(1);
        }
        break;
        }
      case 2:{
        if (!hasError) {
        jj_consume_token(2);
        }
        break;
        }
      default:
        jj_la1[1] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    }
    end_label_1: ;
    }
    if (!hasError) {
    jj_consume_token(0);
    }
}


void Example::MatchedBraces() {
    if (!hasError) {
    jj_consume_token(3);
    }
    if (!hasError) {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 3:{
      if (!hasError) {
      MatchedBraces();
      }
      break;
      }
    default:
      jj_la1[2] = jj_gen;
      ;
    }
    }
    if (!hasError) {
    jj_consume_token(4);
    }
}


  Example::Example(TokenManager *tokenManager){
    head = nullptr;
    ReInit(tokenManager);
}
Example::~Example()
{
  clear();
}

void Example::ReInit(TokenManager* tokenManager){
    clear();
    errorHandler = new ErrorHandler();
    hasError = false;
    token_source = tokenManager;
    head = token = new Token();
    token->kind = 0;
    token->next = nullptr;
    jj_lookingAhead = false;
    jj_rescan = false;
    jj_done = false;
    jj_scanpos = jj_lastpos = nullptr;
    jj_gc = 0;
    jj_kind = -1;
    indent = 0;
    trace = false;
    jj_ntk = -1;
    jj_gen = 0;
    for (int i = 0; i < 3; i++) jj_la1[i] = -1;
  }


void Example::clear(){
  //Since token manager was generate from outside,
  //parser should not take care of deleting
  //if (token_source) delete token_source;
  if (head) {
    Token *next, *t = head;
    while (t) {
      next = t->next;
      delete t;
      t = next;
    }
  }
  if (errorHandler) {
    delete errorHandler, errorHandler = nullptr;
  }
}


Token * Example::jj_consume_token(int kind)  {
    Token *oldToken;
    if ((oldToken = token)->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    if (token->kind == kind) {
      jj_gen++;
      return token;
    }
    token = oldToken;
    jj_kind = kind;
    JJString image = kind >= 0 ? tokenImage[kind] : tokenImage[0];
    errorHandler->handleUnexpectedToken(kind, image.substr(1, image.size() - 2), getToken(1), this);
    hasError = true;
    return token;
  }


/** Get the next Token. */

Token * Example::getNextToken(){
    if (token->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    jj_gen++;
    return token;
  }

/** Get the specific Token. */

Token * Example::getToken(int index){
    Token *t = token;
    for (int i = 0; i < index; i++) {
      if (t->next != nullptr) t = t->next;
      else t = t->next = token_source->getNextToken();
    }
    return t;
  }


int Example::jj_ntk_f(){
    if ((jj_nt=token->next) == nullptr)
      return (jj_ntk = (token->next=token_source->getNextToken())->kind);
    else
      return (jj_ntk = jj_nt->kind);
  }


 void  Example::parseError()   {
      fprintf(stderr, "Parse error at: %d:%d, after token: %s encountered: %s\n", token->beginLine, token->beginColumn, addUnicodeEscapes(token->image).c_str(), addUnicodeEscapes(getToken(1)->image).c_str());
   }


  bool Example::trace_enabled()  {
    return trace;
  }


  void Example::enable_tracing()  {
  }

  void Example::disable_tracing()  {
  }


