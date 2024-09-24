#include <iostream>
#include <vector>

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));
    std::cout << "Enter elements of the 2D array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> array[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += array[i][j];
        }
    }

    std::cout << "Sum of all values: " << sum << std::endl;

    return 0;
}
