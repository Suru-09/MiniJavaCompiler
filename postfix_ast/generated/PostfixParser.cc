/* PostfixParser.cc */
#include "PostfixParser.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
  unsigned int jj_la1_0[] = {
0x40,0x80,0x102,};

  /** Constructor with user supplied TokenManager. */



ASTRoot       * PostfixParser::Start() {
#if !defined ERROR_RET_Start
#define ERROR_RET_Start NULL
#endif
#define __ERROR_RET__ ERROR_RET_Start
/*@bgen(jjtree) Root */
  ASTRoot *jjtn000 = new ASTRoot(JJTROOT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      Expression();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(0);
          { if (hasError) { return __ERROR_RET__; } }
      
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
return jjtn000;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }
assert(false);

#undef __ERROR_RET__

}


void PostfixParser::Expression() {
#if !defined ERROR_RET_Expression
#define ERROR_RET_Expression 
#endif
#define __ERROR_RET__ ERROR_RET_Expression
/*@bgen(jjtree) Expression */
  ASTExpression *jjtn000 = new ASTExpression(JJTEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      Term();
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 6:{
          ;
          break;
          }
        default:
          jj_la1[0] = jj_gen;
          goto end_label_1;
        }
        jj_consume_token(6);
            { if (hasError) { return __ERROR_RET__; } }
        
        Term();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_1: ;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }

#undef __ERROR_RET__

}


void PostfixParser::Term() {
#if !defined ERROR_RET_Term
#define ERROR_RET_Term 
#endif
#define __ERROR_RET__ ERROR_RET_Term
/*@bgen(jjtree) Term */
  ASTTerm *jjtn000 = new ASTTerm(JJTTERM);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      Factor();
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 7:{
          ;
          break;
          }
        default:
          jj_la1[1] = jj_gen;
          goto end_label_2;
        }
        jj_consume_token(7);
            { if (hasError) { return __ERROR_RET__; } }
        
        Factor();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_2: ;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }

#undef __ERROR_RET__

}


void PostfixParser::Factor() {
#if !defined ERROR_RET_Factor
#define ERROR_RET_Factor 
#endif
#define __ERROR_RET__ ERROR_RET_Factor
/*@bgen(jjtree) Factor */
  ASTFactor *jjtn000 = new ASTFactor(JJTFACTOR);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 8:{
        jj_consume_token(8);
            { if (hasError) { return __ERROR_RET__; } }
        
        Expression();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(9);
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      case Integer:{
        IntegerConstant();
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      default:
        jj_la1[2] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }

#undef __ERROR_RET__

}


void PostfixParser::IntegerConstant() {
#if !defined ERROR_RET_IntegerConstant
#define ERROR_RET_IntegerConstant 
#endif
#define __ERROR_RET__ ERROR_RET_IntegerConstant
Token* t = NULL;/*@bgen(jjtree) IntegerConstant */
  ASTIntegerConstant *jjtn000 = new ASTIntegerConstant(JJTINTEGERCONSTANT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      t = jj_consume_token(Integer);
          { if (hasError) { return __ERROR_RET__; } }
      
jjtree.closeNodeScope(jjtn000, true);
      jjtc000 = false;
jjtn000->setValue(t->image);
    } catch ( ...) {
if (jjtc000) {
        jjtree.clearNodeScope(jjtn000);
        jjtc000 = false;
      } else {
        jjtree.popNode();
      }
    }
if (jjtc000) {
        jjtree.closeNodeScope(jjtn000, true);
      }

#undef __ERROR_RET__

}


  PostfixParser::PostfixParser(TokenManager *tokenManager){
    head = nullptr;
    ReInit(tokenManager);
}
PostfixParser::~PostfixParser()
{
  clear();
}

void PostfixParser::ReInit(TokenManager* tokenManager){
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
    jjtree.reset();
    jj_gen = 0;
    for (int i = 0; i < 3; i++) jj_la1[i] = -1;
  }


void PostfixParser::clear(){
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


Token * PostfixParser::jj_consume_token(int kind)  {
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

Token * PostfixParser::getNextToken(){
    if (token->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    jj_gen++;
    return token;
  }

/** Get the specific Token. */

Token * PostfixParser::getToken(int index){
    Token *t = token;
    for (int i = 0; i < index; i++) {
      if (t->next != nullptr) t = t->next;
      else t = t->next = token_source->getNextToken();
    }
    return t;
  }


int PostfixParser::jj_ntk_f(){
    if ((jj_nt=token->next) == nullptr)
      return (jj_ntk = (token->next=token_source->getNextToken())->kind);
    else
      return (jj_ntk = jj_nt->kind);
  }


 void  PostfixParser::parseError()   {
      fprintf(stderr, "Parse error at: %d:%d, after token: %s encountered: %s\n", token->beginLine, token->beginColumn, addUnicodeEscapes(token->image).c_str(), addUnicodeEscapes(getToken(1)->image).c_str());
   }


  bool PostfixParser::trace_enabled()  {
    return trace;
  }


  void PostfixParser::enable_tracing()  {
  }

  void PostfixParser::disable_tracing()  {
  }


