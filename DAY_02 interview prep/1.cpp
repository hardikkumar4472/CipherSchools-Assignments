#include <iostream>
#include <algorithm>
using namespace std;

int findMinDifference(int arr[], int n, int m) {
    if (m > n) return -1;
    
    sort(arr, arr + n);
    
    int min_diff = arr[m - 1] - arr[0];
    
    for (int i = 1; i <= n - m; i++) {
        int diff = arr[i + m - 1] - arr[i];
        min_diff = min(min_diff, diff);
    }
    
    return min_diff;
}

int main() {
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m;
    
    cin >> m;
    
    cout << findMinDifference(arr, n, m) << endl;
    
    return 0;
}
