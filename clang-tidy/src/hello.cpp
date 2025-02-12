#include "hello.h"
#include <iostream>

// 该函数无返回值，所以不会被clang-tidy修改为auto ->的形式。
void hello(std::string str) { std::cout << "hello" << str << std::endl; }
