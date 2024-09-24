#include <iostream>
#include <vector>

int main() {
    int rows, cols, key;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));
    std::cout << "Enter elements of the 2D array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> array[i][j];
        }
    }

    std::cout << "Enter the key to search: ";
    std::cin >> key;

    bool found = false;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] == key) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
