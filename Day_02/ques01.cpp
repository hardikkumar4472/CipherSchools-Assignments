#include <cstdlib>
#include <iostream>

int findLargest(int a, int b, int c) {
  if (a >= b && a >= c) {
    return a;
  } else if (b >= a && b >= c) {
    return b;
  } else {
    return c;
  }
}

int main() {
  int num1, num2, num3;

  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the second number: ";
  std::cin >> num2;
  std::cout << "Enter the third number: ";
  std::cin >> num3;

  int largest = findLargest(num1, num2, num3);

  std::cout << "The largest number is: " << largest << std::endl;

  return EXIT_SUCCESS;
}
