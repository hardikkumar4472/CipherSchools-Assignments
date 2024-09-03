#include <cstdlib>
#include <iostream>
#include <string>

void countVowelsAndConsonants(const std::string &str) {
  int vowels = 0;
  int consonants = 0;
  for (char c : str) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      ++vowels;
    } else if (c >= 'a' && c <= 'z') {
      ++consonants;
    }
  }
  std::cout << "Number of vowels: " << vowels << std::endl;
  std::cout << "Number of consonants: " << consonants << std::endl;
}

int main() {
  std::string input;
  std::cout << "Enter a string: ";
  std::cin >> input;
  countVowelsAndConsonants(input);
  return EXIT_SUCCESS;
}
