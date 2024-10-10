#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> gasStations(n);
        for (int i = 0; i < n; ++i) {
            cin >> gasStations[i];
        }

        gasStations.insert(gasStations.begin(), 0);
        gasStations.push_back(x);

        int maxDistance = 0;
        for (int i = 1; i < gasStations.size(); ++i) {
            maxDistance = max(maxDistance, gasStations[i] - gasStations[i - 1]);
        }

        cout << maxDistance << endl;
    }

    return 0;
}
