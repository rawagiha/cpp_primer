#include <iostream>
#include <string>

std::string (&func())[10];

auto func2() -> std::string(&)[10];

using arrT = std::string[10];
arrT& func1();
