#include <cstdlib>
#include <iostream>

int main() {
  int N;

  std::cout << "Enter a number: ";
  std::cin >> N;

  std::cout << "Multiplication table of " << N << ":\n";
  for (int i = 1; i <= 10; ++i) {
    std::cout << N << " x " << i << " = " << N * i << "\n";
  }

  return EXIT_SUCCESS;
}
