#include <string>

#include "hello.h"

auto add(int a, int b) -> int { return a + b; }

auto main() -> int {
  hello(std::string("world!"));
  return 0;
}