#include <iostream>

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10); 
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "Sum of digits of " << n << " is " << sumOfDigits(n) << std::endl;
    return 0;
}
