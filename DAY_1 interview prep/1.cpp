#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int minElement = INT_MAX, maxElement = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minElement) minElement = arr[i];
        if (arr[i] > maxElement) maxElement = arr[i];
    }

    cout << "Minimum element is: " << minElement << endl;
    cout << "Maximum element is: " << maxElement << endl;
    
    minElement = arr[0];
    maxElement = arr[0];
    int i = 1;
    while (i < n) {
        if (i + 1 < n) {
            if (arr[i] < arr[i + 1]) {
                if (arr[i] < minElement) minElement = arr[i];
                if (arr[i + 1] > maxElement) maxElement = arr[i + 1];
            } else {
                if (arr[i + 1] < minElement) minElement = arr[i + 1];
                if (arr[i] > maxElement) maxElement = arr[i];
            }
            i += 2;
        } else {
            if (arr[i] < minElement) minElement = arr[i];
            if (arr[i] > maxElement) maxElement = arr[i];
            i++;
        }
    }
    
    cout << "Minimum element is: " << minElement << endl;
    cout << "Maximum element is: " << maxElement << endl;

    return 0;
}
