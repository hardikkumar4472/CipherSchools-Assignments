#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= nums[i];
    }
    cout << result << endl;
    return 0;
}
