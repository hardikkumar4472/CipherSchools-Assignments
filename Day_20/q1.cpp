#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the dimensions of the matrix (n and m): ";
    cin >> n >> m;

    int image[n][m];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> image[i][j];
        }
    }

    cout << "Rotated matrix by 90 degrees:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = n - 1; j >= 0; --j) {
            cout << image[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
