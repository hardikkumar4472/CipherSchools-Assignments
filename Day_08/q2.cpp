#include <iostream>
#include <string>

int countCharacter(const std::string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str = "Hello, World!";
    char ch = 'l';
    std::cout << "Occurrences of '" << ch << "': " << countCharacter(str, ch) << std::endl;
    return 0;
}
