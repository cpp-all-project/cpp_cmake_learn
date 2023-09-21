#include <iostream>
#include "utils.h"

//
// Created by ta on 2023-09-20.
//
void chinese_print() {
    // windows SetConsoleOutputCP 函数所在库函数，让 cmd 程序的编码更为 utf-8
    // SetConsoleOutputCP(65001);
    std::cout << "你好，世界！" << std::endl;
}