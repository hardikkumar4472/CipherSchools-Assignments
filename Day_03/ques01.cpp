#include <cstdlib>
#include <iostream>

int main() {
  int N, sum = 0;

  std::cout << "Enter a number: ";
  std::cin >> N;

  for (int i = 1; i <= N; ++i) {
    sum += i;
  }

  std::cout << "The sum of the first " << N << " natural numbers is: " << sum
            << std::endl;

  return EXIT_SUCCESS;
}
