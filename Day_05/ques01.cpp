#include <cstdlib>
#include <iostream>

void checkOddEven(int number) {
  if (number % 2 == 0) {
    std::cout << "Even" << std::endl;
  } else {
    std::cout << "Odd" << std::endl;
  }
}

int main() {
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;
  checkOddEven(num);
  return EXIT_SUCCESS;
}
