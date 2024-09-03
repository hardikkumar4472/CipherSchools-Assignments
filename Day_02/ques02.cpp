#include <cstdlib>
#include <iostream>

int main() {
  int score;

  std::cout << "Enter the score: ";
  std::cin >> score;

  if (score >= 90 && score <= 100) {
    std::cout << "Grade: A" << std::endl;
  } else if (score >= 80 && score < 90) {
    std::cout << "Grade: B" << std::endl;
  } else if (score >= 70 && score < 80) {
    std::cout << "Grade: C" << std::endl;
  } else if (score >= 60 && score < 70) {
    std::cout << "Grade: D" << std::endl;
  } else if (score >= 0 && score < 60) {
    std::cout << "Grade: F" << std::endl;
  } else {
    std::cout << "Invalid score. Please enter a score between 0 and 100."
              << std::endl;
  }

  return EXIT_SUCCESS;
}
