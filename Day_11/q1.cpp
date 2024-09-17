#include <iostream>

std::string findTarget(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    std::cout << findTarget(arr, size, target) << std::endl;
    return 0;
}
