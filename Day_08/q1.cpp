#include <iostream>
#include <string>

int stringLength(const std::string &str) {
    return str.length();
}

int main() {
    std::string str1 = "Hello, World!";
    std::cout << "Length of string: " << stringLength(str1) << std::endl;
    return 0;
}
