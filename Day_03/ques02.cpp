#include <cstdlib>
#include <iostream>

int main() {
  int N;
  long long factorial = 1;

  std::cout << "Enter a number: ";
  std::cin >> N;

  for (int i = 1; i <= N; ++i) {
    factorial *= i;
  }

  std::cout << "The factorial of " << N << " is: " << factorial << std::endl;

  return EXIT_SUCCESS;
}
