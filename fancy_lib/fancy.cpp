#include <iostream>

extern "C" {
void fancy_function(int a) { std::cout << "Value: " << a << '\n'; }
}
