
// Generated from ifcc.g4 by ANTLR 4.13.2


#include "ifccVisitor.h"

#include "ifccParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct IfccParserStaticData final {
  IfccParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  IfccParserStaticData(const IfccParserStaticData&) = delete;
  IfccParserStaticData(IfccParserStaticData&&) = delete;
  IfccParserStaticData& operator=(const IfccParserStaticData&) = delete;
  IfccParserStaticData& operator=(IfccParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ifccParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<IfccParserStaticData> ifccParserStaticData = nullptr;

void ifccParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ifccParserStaticData != nullptr) {
    return;
  }
#else
  assert(ifccParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<IfccParserStaticData>(
    std::vector<std::string>{
      "axiom", "prog", "statement", "expr"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'('", "')'", "'{'", "'}'", "';'", "'='", "'*'", 
      "'/'", "'+'", "'-'", "'<<'", "'>>'", "'<'", "'>'", "'<='", "'>='", 
      "'=='", "'!='", "'&'", "'^'", "'|'", "'['", "']'", "'return'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "RETURN", "CONST", "VAR", "COMMENT", 
      "DIRECTIVE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,31,81,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,5,1,18,8,1,10,1,12,1,21,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,3,2,37,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,50,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,76,8,3,10,3,12,3,79,
  	9,3,1,3,0,1,6,4,0,2,4,6,0,5,1,0,9,10,1,0,11,12,1,0,13,14,1,0,15,18,1,
  	0,19,20,90,0,8,1,0,0,0,2,11,1,0,0,0,4,36,1,0,0,0,6,49,1,0,0,0,8,9,3,2,
  	1,0,9,10,5,0,0,1,10,1,1,0,0,0,11,12,5,1,0,0,12,13,5,2,0,0,13,14,5,3,0,
  	0,14,15,5,4,0,0,15,19,5,5,0,0,16,18,3,4,2,0,17,16,1,0,0,0,18,21,1,0,0,
  	0,19,17,1,0,0,0,19,20,1,0,0,0,20,22,1,0,0,0,21,19,1,0,0,0,22,23,5,6,0,
  	0,23,3,1,0,0,0,24,25,5,26,0,0,25,26,3,6,3,0,26,27,5,7,0,0,27,37,1,0,0,
  	0,28,29,5,1,0,0,29,30,5,28,0,0,30,37,5,7,0,0,31,32,5,28,0,0,32,33,5,8,
  	0,0,33,34,3,6,3,0,34,35,5,7,0,0,35,37,1,0,0,0,36,24,1,0,0,0,36,28,1,0,
  	0,0,36,31,1,0,0,0,37,5,1,0,0,0,38,39,6,3,-1,0,39,40,5,3,0,0,40,41,3,6,
  	3,0,41,42,5,4,0,0,42,50,1,0,0,0,43,50,5,28,0,0,44,50,5,27,0,0,45,46,5,
  	28,0,0,46,47,5,24,0,0,47,48,5,27,0,0,48,50,5,25,0,0,49,38,1,0,0,0,49,
  	43,1,0,0,0,49,44,1,0,0,0,49,45,1,0,0,0,50,77,1,0,0,0,51,52,10,11,0,0,
  	52,53,7,0,0,0,53,76,3,6,3,12,54,55,10,10,0,0,55,56,7,1,0,0,56,76,3,6,
  	3,11,57,58,10,9,0,0,58,59,7,2,0,0,59,76,3,6,3,10,60,61,10,8,0,0,61,62,
  	7,3,0,0,62,76,3,6,3,9,63,64,10,7,0,0,64,65,7,4,0,0,65,76,3,6,3,8,66,67,
  	10,6,0,0,67,68,5,21,0,0,68,76,3,6,3,7,69,70,10,5,0,0,70,71,5,22,0,0,71,
  	76,3,6,3,6,72,73,10,4,0,0,73,74,5,23,0,0,74,76,3,6,3,5,75,51,1,0,0,0,
  	75,54,1,0,0,0,75,57,1,0,0,0,75,60,1,0,0,0,75,63,1,0,0,0,75,66,1,0,0,0,
  	75,69,1,0,0,0,75,72,1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,
  	78,7,1,0,0,0,79,77,1,0,0,0,5,19,36,49,75,77
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ifccParserStaticData = std::move(staticData);
}

}

ifccParser::ifccParser(TokenStream *input) : ifccParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ifccParser::ifccParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ifccParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ifccParserStaticData->atn, ifccParserStaticData->decisionToDFA, ifccParserStaticData->sharedContextCache, options);
}

ifccParser::~ifccParser() {
  delete _interpreter;
}

const atn::ATN& ifccParser::getATN() const {
  return *ifccParserStaticData->atn;
}

std::string ifccParser::getGrammarFileName() const {
  return "ifcc.g4";
}

const std::vector<std::string>& ifccParser::getRuleNames() const {
  return ifccParserStaticData->ruleNames;
}

const dfa::Vocabulary& ifccParser::getVocabulary() const {
  return ifccParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ifccParser::getSerializedATN() const {
  return ifccParserStaticData->serializedATN;
}


//----------------- AxiomContext ------------------------------------------------------------------

ifccParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog() {
  return getRuleContext<ifccParser::ProgContext>(0);
}

tree::TerminalNode* ifccParser::AxiomContext::EOF() {
  return getToken(ifccParser::EOF, 0);
}


size_t ifccParser::AxiomContext::getRuleIndex() const {
  return ifccParser::RuleAxiom;
}


std::any ifccParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AxiomContext* ifccParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, ifccParser::RuleAxiom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    prog();
    setState(9);
    match(ifccParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

ifccParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ifccParser::StatementContext *> ifccParser::ProgContext::statement() {
  return getRuleContexts<ifccParser::StatementContext>();
}

ifccParser::StatementContext* ifccParser::ProgContext::statement(size_t i) {
  return getRuleContext<ifccParser::StatementContext>(i);
}


size_t ifccParser::ProgContext::getRuleIndex() const {
  return ifccParser::RuleProg;
}


std::any ifccParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ProgContext* ifccParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 2, ifccParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11);
    match(ifccParser::T__0);
    setState(12);
    match(ifccParser::T__1);
    setState(13);
    match(ifccParser::T__2);
    setState(14);
    match(ifccParser::T__3);
    setState(15);
    match(ifccParser::T__4);
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 335544322) != 0)) {
      setState(16);
      statement();
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(22);
    match(ifccParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ifccParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::StatementContext::getRuleIndex() const {
  return ifccParser::RuleStatement;
}

void ifccParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignmentContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::AssignmentContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ExprContext* ifccParser::AssignmentContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::AssignmentContext::AssignmentContext(StatementContext *ctx) { copyFrom(ctx); }


std::any ifccParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::DeclarationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::DeclarationContext::DeclarationContext(StatementContext *ctx) { copyFrom(ctx); }


std::any ifccParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ReturnStmtContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::ExprContext* ifccParser::ReturnStmtContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::ReturnStmtContext::ReturnStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any ifccParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::StatementContext* ifccParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::RETURN: {
        _localctx = _tracker.createInstance<ifccParser::ReturnStmtContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(24);
        match(ifccParser::RETURN);
        setState(25);
        expr(0);
        setState(26);
        match(ifccParser::T__6);
        break;
      }

      case ifccParser::T__0: {
        _localctx = _tracker.createInstance<ifccParser::DeclarationContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(28);
        match(ifccParser::T__0);
        setState(29);
        match(ifccParser::VAR);
        setState(30);
        match(ifccParser::T__6);
        break;
      }

      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<ifccParser::AssignmentContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(31);
        match(ifccParser::VAR);
        setState(32);
        match(ifccParser::T__7);
        setState(33);
        expr(0);
        setState(34);
        match(ifccParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ifccParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ExprContext::getRuleIndex() const {
  return ifccParser::RuleExpr;
}

void ifccParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BitwiseAndExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::BitwiseAndExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::BitwiseAndExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::BitwiseAndExprContext::BitwiseAndExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::BitwiseAndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBitwiseAndExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExprContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ConstExprContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::ConstExprContext::ConstExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::ConstExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitConstExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayExprContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ArrayExprContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::ArrayExprContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::ArrayExprContext::ArrayExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::ArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::EqualityExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::EqualityExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::EqualityExprContext::EqualityExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::EqualityExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEqualityExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitwiseOrExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::BitwiseOrExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::BitwiseOrExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::BitwiseOrExprContext::BitwiseOrExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::BitwiseOrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBitwiseOrExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParExprContext ------------------------------------------------------------------

ifccParser::ExprContext* ifccParser::ParExprContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::ParExprContext::ParExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::ParExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitParExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::MultExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::MultExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::MultExprContext::MultExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::MultExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMultExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarExprContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::VarExprContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarExprContext::VarExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::VarExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVarExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::AddExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::AddExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::AddExprContext::AddExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::RelationalExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::RelationalExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::RelationalExprContext::RelationalExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitwiseXorExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::BitwiseXorExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::BitwiseXorExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::BitwiseXorExprContext::BitwiseXorExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::BitwiseXorExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBitwiseXorExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShiftExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::ShiftExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::ShiftExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::ShiftExprContext::ShiftExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ifccParser::ShiftExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitShiftExpr(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ExprContext* ifccParser::expr() {
   return expr(0);
}

ifccParser::ExprContext* ifccParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ifccParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ifccParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, ifccParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(39);
      match(ifccParser::T__2);
      setState(40);
      expr(0);
      setState(41);
      match(ifccParser::T__3);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<VarExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(43);
      match(ifccParser::VAR);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ConstExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(44);
      match(ifccParser::CONST);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(45);
      match(ifccParser::VAR);
      setState(46);
      match(ifccParser::T__23);
      setState(47);
      match(ifccParser::CONST);
      setState(48);
      match(ifccParser::T__24);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(77);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(75);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(51);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(52);
          antlrcpp::downCast<MultExprContext *>(_localctx)->OM = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__8

          || _la == ifccParser::T__9)) {
            antlrcpp::downCast<MultExprContext *>(_localctx)->OM = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(53);
          expr(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(54);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(55);
          antlrcpp::downCast<AddExprContext *>(_localctx)->OA = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__10

          || _la == ifccParser::T__11)) {
            antlrcpp::downCast<AddExprContext *>(_localctx)->OA = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(56);
          expr(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ShiftExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(57);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(58);
          antlrcpp::downCast<ShiftExprContext *>(_localctx)->OS = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__12

          || _la == ifccParser::T__13)) {
            antlrcpp::downCast<ShiftExprContext *>(_localctx)->OS = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(59);
          expr(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(60);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(61);
          antlrcpp::downCast<RelationalExprContext *>(_localctx)->OR = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 491520) != 0))) {
            antlrcpp::downCast<RelationalExprContext *>(_localctx)->OR = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(62);
          expr(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(63);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(64);
          antlrcpp::downCast<EqualityExprContext *>(_localctx)->OE = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__18

          || _la == ifccParser::T__19)) {
            antlrcpp::downCast<EqualityExprContext *>(_localctx)->OE = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(65);
          expr(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BitwiseAndExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(66);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(67);
          match(ifccParser::T__20);
          setState(68);
          expr(7);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BitwiseXorExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(69);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(70);
          match(ifccParser::T__21);
          setState(71);
          expr(6);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitwiseOrExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(72);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(73);
          match(ifccParser::T__22);
          setState(74);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(79);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void ifccParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ifccParserInitialize();
#else
  ::antlr4::internal::call_once(ifccParserOnceFlag, ifccParserInitialize);
#endif
}
