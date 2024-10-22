#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    if (open > 0) {
        generateParentheses(open - 1, close, current + "(", result);
    }
    if (close > open) {
        generateParentheses(open, close - 1, current + ")", result);
    }
}

std::vector<std::string> generateAllParentheses(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs: ";
    std::cin >> n;
    std::vector<std::string> combinations = generateAllParentheses(n);
    for (const std::string& str : combinations) {
        std::cout << str << std::endl;
    }
    return 0;
}
