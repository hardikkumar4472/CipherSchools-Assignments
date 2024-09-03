#include <cstdlib>
#include <iostream>
#include <string>

int main() {
  std::string str1, str2, concatenatedStr;

  std::cout << "Enter the first string: ";
  std::getline(std::cin, str1);

  std::cout << "Enter the second string: ";
  std::getline(std::cin, str2);

  std::cout << "Concatenated string: " << str1 + str2 << std::endl;

  return EXIT_SUCCESS;
}
