#include <cstdlib>
#include <iostream>

int main() {
  int num1, num2;

  std::cout << "Enter the first integer: ";
  std::cin >> num1;
  std::cout << "Enter the second integer: ";
  std::cin >> num2;

  std::cout << "Addition: " << num1 + num2 << std::endl;

  std::cout << "Subtraction: " << num1 - num2 << std::endl;

  std::cout << "Multiplication: " << num1 * num2 << std::endl;

  if (num2 != 0) {
    std::cout << "Division: " << static_cast<float>(num1) / num2 << std::endl;
    std::cout << "Modulus: " << num1 % num2 << std::endl;
  } else {
    std::cout << "Division: Error! Division by zero is not allowed."
              << std::endl;
    std::cout << "Modulus: Error! Modulus by zero is not allowed." << std::endl;
  }

  return EXIT_SUCCESS;
}
