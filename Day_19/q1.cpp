#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outFile("details.txt");

    if (outFile.is_open()) {
        outFile << "First Name: John\n";
        outFile << "Last Name: Doe\n";
        outFile << "Age: 30\n";
        outFile.close();
        std::cout << "Details have been written to the file.\n";
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }

    std::ifstream inFile("details.txt");
    std::string line;

    if (inFile.is_open()) {
        std::cout << "Details from the file:\n";
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading.\n";
    }

    return 0;
}
