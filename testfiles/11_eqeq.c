// 测试多函数、连续定义、以及复杂的链式赋值
int compute(int x, int y) {
    int sum, diff; // 连续定义
    sum = x + y;
    diff = x - y;
    return sum * diff;
}

int main() {
    // 1. 验证连续定义 (Sequential Declaration)
    // 检查 StaticVisitor 是否能正确循环处理 VAR 列表并分配 offset
    int a, b, c, d, result;

    // 2. 验证基础链式赋值 (Chained Assignment)
    // 检查 CodeGenVisitor::visitVarAssignmentExpr 是否正确返回了左值名
    // 预期：c=10, b=10, a=10
    a = b = c = 10;

    // 3. 验证赋值作为子表达式 (Assignment as sub-expression)
    // 根据你修正后的优先级，d = 2 应该先执行，其返回值参与加法
    // 预期：d=2, b=12, a=12 (c 保持 10)
    a = b = (d = 2) + 10;

    // 4. 验证在多函数调用中的稳定性
    // result = compute(12, 10) -> (12+10)*(12-10) = 22 * 2 = 44
    result = compute(a, c);

    // 5. 终极混淆：链式赋值与算术混合
    // result = (44 + 2) -> 46, 然后赋给 d, c, b
    // 最终返回 46
    b = c = d = result + 2;

    return d; 
}