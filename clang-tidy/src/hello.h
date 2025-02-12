#ifndef HELLO_H
#define HELLO_H
#include <string>
// 该函数无返回值，所以不会被clang-tidy修改为auto ->的形式。
void hello(std::string str);

#endif