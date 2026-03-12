int main() {
    int a;
    int b;
    int c;
    int res;

    a = 10;
    b = 5;
    c = 20;

    // 1. 基础 if-else 测试
    if (a > b) {
        res = 100;
    } else {
        res = 200;
    }

    // 2. 嵌套 if-else 与 Bloc 块测试
    if (res == 100) {
        if (c < a) {
            res = 1;
        } else {
            // 这里测试了代码块 (Bloc)
            int temp;
            temp = 50;
            res = temp;
        }
    } else {
        res = 0;
    }

    // 预期逻辑：
    // a(10) > b(5) 为真 -> res = 100
    // res == 100 为真
    // c(20) < a(10) 为假 -> 进入 else 分支
    // res = 50
    // 最终返回应该是 50
    return res;
}