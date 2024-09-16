#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string &str) {
    std::string cleanedStr;
    for (char ch : str) {
        if (isalnum(ch)) {
            cleanedStr += tolower(ch);
        }
    }
    std::string reversedStr = cleanedStr;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return cleanedStr == reversedStr;
}

int main() {
    std::string str = "A man, a plan, a canal, Panama";
    std::cout << "Is palindrome: " << isPalindrome(str) << std::endl;
    return 0;
}
