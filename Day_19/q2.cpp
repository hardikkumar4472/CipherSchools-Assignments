#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("sample.txt");
    std::string line;

    if (inFile.is_open()) {
        std::cout << "Reading from the file:\n";
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Unable to open file.\n";
    }

    return 0;
}
