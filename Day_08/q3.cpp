#include <iostream>
#include <string>

std::string concatenateStrings(const std::string &str1, const std::string &str2) {
    return str1 + str2;
}

int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::cout << "Concatenated string: " << concatenateStrings(str1, str2) << std::endl;
    return 0;
}
