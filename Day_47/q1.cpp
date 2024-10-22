#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int turtleMax = a[0], piggyMin = a[1];
        for (int i = 1; i < n - 1; ++i) {
            turtleMax = max(turtleMax, a[i]);
            piggyMin = min(piggyMin, a[i + 1]);
        }
        cout << max(turtleMax, piggyMin) << endl;
    }

    return 0;
}
