#include <iostream>

int main() {
    int num = 42;
    int* ptr = &num;
    std::cout << "Value of num (using variable): " << num << std::endl;
    std::cout << "Value of num (using pointer): " << *ptr << std::endl;
    return 0;
}
