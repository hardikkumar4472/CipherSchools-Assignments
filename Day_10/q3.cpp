#include <iostream>

int main() {
    int num = 100;
    int* ptr = &num;
    int** ptrToPtr = &ptr;
    std::cout << "Value of num (using variable): " << num << std::endl;
    std::cout << "Value of num (using pointer): " << *ptr << std::endl;
    std::cout << "Value of num (using pointer to pointer): " << **ptrToPtr << std::endl;
    return 0;
}
