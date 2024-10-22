#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

class NonIntegerDataException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Non-integer data found in the file.";
    }
};

int main() {
    std::string filePath;
    std::cout << "Enter the file path: ";
    std::cin >> filePath;

    try {
        std::ifstream file(filePath);
        if (!file.is_open()) {
            throw std::ios_base::failure("Cannot open the file.");
        }

        int sum = 0;
        int number;

        while (file >> number) {
            if (number < 0) {
                throw NonIntegerDataException();
            }
            sum += number;
        }

        if (file.fail() && !file.eof()) {
            throw NonIntegerDataException();
        }

        std::cout << "Sum of integers: " << sum << std::endl;

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (const NonIntegerDataException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
