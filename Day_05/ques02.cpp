#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>

void reverseString(const std::string &str) {
  std::string reversedStr = str;
  std::reverse(reversedStr.begin(), reversedStr.end());
  std::cout << "Reversed string: " << reversedStr << std::endl;
}

int main() {
  std::string input;
  std::cout << "Enter a string: ";
  std::cin >> input;
  reverseString(input);
  return EXIT_SUCCESS;
}
