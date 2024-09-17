#include <iostream>

int main() {
    int* dynamicVar = new int;
    *dynamicVar = 42;
    std::cout << "Value of dynamic variable: " << *dynamicVar << std::endl;
    delete dynamicVar;
    return 0;
}
