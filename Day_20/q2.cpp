#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the dimensions of the matrix (n and m): ";
    cin >> n >> m;

    vector<int> elements;
    int array[n][m];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> array[i][j];
            elements.push_back(array[i][j]);
        }
    }

    sort(elements.begin(), elements.end());

    cout << "Sorted matrix:\n";
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << elements[index++] << " ";
        }
        cout << endl;
    }

    return 0;
}
