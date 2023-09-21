#include <iostream>
//#include <windows.h>
#include "utils.h"
#include "config.h"

int main() {
    std::locale::global(std::locale(""));
    test_lib();
    return 0;
}

void test_lib() {
    // 测试库文件
    int a = 20;
    int b = 12;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract(a, b));
    printf("a * b = %d\n", multiply(a, b));
    printf("a / b = %f\n", divide(a, b));
}


