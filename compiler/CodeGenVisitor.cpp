#include "CodeGenVisitor.h"

antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
    std::cout << ".globl main\n";
    std::cout << "main:\n"; 
    
    std::cout << "    pushq %rbp\n";
    std::cout << "    movq %rsp, %rbp\n";

    int numVariables = symbolTable.size();
    if (numVariables > 0) {
        int stackSize = numVariables * 4;

        int alignedStackSize = (stackSize + 15) & ~15; 
        
        std::cout << "    subq $" << alignedStackSize << ", %rsp\n";
    }

    for (auto stmt : ctx->statement()) {
        this->visit(stmt); 
    }

    std::cout << "end_main:\n"; 
    std::cout << "    movq %rbp, %rsp\n"; 
    
    std::cout << "    popq %rbp\n";
    std::cout << "    ret\n";

    return 0;
}

antlrcpp::Any CodeGenVisitor::visitAssignment(ifccParser::AssignmentContext *ctx)
{
    std::string varName = ctx->VAR()->getText(); 

    this->visit(ctx->expr()); 

    int position = symbolTable[varName]; 

    std::cout << "    movl %eax, " << position << "(%rbp)\n"; 

    return 0;
}

antlrcpp::Any CodeGenVisitor::visitReturnStmt(ifccParser::ReturnStmtContext *ctx)
{
    this->visit(ctx->expr()); 
    std::cout << "    jmp end_main\n";
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitParExpr(ifccParser::ParExprContext *ctx)
{
    return this->visit(ctx->expr());
}

antlrcpp::Any CodeGenVisitor::visitAddExpr(ifccParser::AddExprContext *ctx) 
{
    this->visit(ctx->expr(0)); 

    std::cout << "    pushq %rax\n"; 

    this->visit(ctx->expr(1)); 

    std::cout << "    popq %rdx\n"; 

    if (ctx->OA->getText() == "-") {
        std::cout << "    negl %eax\n";
    }
    std::cout << "    addl %edx, %eax\n";
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitMultExpr(ifccParser::MultExprContext *ctx) 
{
    this->visit(ctx->expr(0));
    std::cout << "    pushq %rax\n";

    this->visit(ctx->expr(1));
    std::cout << "    movl %eax, %ecx\n";
    
    std::cout << "    popq %rax\n";

    if (ctx->OM->getText() == "*") {
        std::cout << "    imull %ecx, %eax\n"; 
    } else {
        std::cout << "    cltd\n";
        std::cout << "    idivl %ecx\n";
    }

    return 0;
}

antlrcpp::Any CodeGenVisitor::visitConstExpr(ifccParser::ConstExprContext *ctx) 
{
    int value = std::stoi(ctx->CONST()->getText()); 
    std::cout << "    movl $" << value << ", %eax" << std::endl; 

    return 0;
}

antlrcpp::Any CodeGenVisitor::visitVarExpr(ifccParser::VarExprContext *ctx) 
{
    std::string varName = ctx->VAR()->getText();
    int position = symbolTable[varName]; 

    std::cout << "    movl " << position << "(%rbp), %eax" << std::endl;
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitArrayExpr(ifccParser::ArrayExprContext *ctx) {
    std::string varName = ctx->VAR()->getText();
    int index = std::stoi(ctx->CONST()->getText());

    int basePosition = symbolTable[varName];
    int elementPosition = basePosition - (index * 4);

    std::cout << "    movl " << elementPosition << "(%rbp), %eax" << std::endl;
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitRelationalExpr(ifccParser::RelationalExprContext *ctx) {
    this->visit(ctx->expr(0));
    std::cout << "    pushq %rax\n";
    this->visit(ctx->expr(1));
    std::cout << "    movl %eax, %ecx\n";
    std::cout << "    popq %rax\n";

    std::cout << "    cmpl %ecx, %eax\n";

    std::string op = ctx->OR->getText();
    if (op == "<")  std::cout << "    setl %al\n";
    else if (op == ">")  std::cout << "    setg %al\n";
    else if (op == "<=") std::cout << "    setle %al\n";
    else if (op == ">=") std::cout << "    setge %al\n";

    std::cout << "    movzbl %al, %eax\n";
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitEqualityExpr(ifccParser::EqualityExprContext *ctx) {
    this->visit(ctx->expr(0));
    std::cout << "    pushq %rax\n";
    this->visit(ctx->expr(1));
    std::cout << "    movl %eax, %ecx\n";
    std::cout << "    popq %rax\n";

    std::cout << "    cmpl %ecx, %eax\n";

    std::string op = ctx->OE->getText();
    if (op == "==") std::cout << "    sete %al\n";
    else if (op == "!=") std::cout << "    setne %al\n";

    std::cout << "    movzbl %al, %eax\n";
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitBitwiseAndExpr(ifccParser::BitwiseAndExprContext *ctx) {
    this->visit(ctx->expr(0));
    std::cout << "    pushq %rax\n";
    this->visit(ctx->expr(1));
    std::cout << "    movl %eax, %ecx\n";
    std::cout << "    popq %rax\n";
    std::cout << "    andl %ecx, %eax\n";
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitBitwiseOrExpr(ifccParser::BitwiseOrExprContext *ctx) {
    this->visit(ctx->expr(0));
    std::cout << "    pushq %rax\n";
    this->visit(ctx->expr(1));
    std::cout << "    movl %eax, %ecx\n";
    std::cout << "    popq %rax\n";
    std::cout << "    orl %ecx, %eax\n";
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitBitwiseXorExpr(ifccParser::BitwiseXorExprContext *ctx) {
    this->visit(ctx->expr(0));
    std::cout << "    pushq %rax\n";
    this->visit(ctx->expr(1));
    std::cout << "    movl %eax, %ecx\n";
    std::cout << "    popq %rax\n";
    std::cout << "    xorl %ecx, %eax\n";
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitShiftExpr(ifccParser::ShiftExprContext *ctx) {
    this->visit(ctx->expr(0));
    std::cout << "    pushq %rax\n";
    this->visit(ctx->expr(1));
    std::cout << "    movl %eax, %ecx\n";
    std::cout << "    popq %rax\n";

    std::string op = ctx->OS->getText();
    if (op == "<<") std::cout << "    sall %cl, %eax\n";
    else if (op == ">>") std::cout << "    sar %cl, %eax\n";

    return 0;
}