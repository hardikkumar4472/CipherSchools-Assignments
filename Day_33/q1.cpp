#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> freqMap;
    
    for (char c : s) {
        freqMap[c]++;
    }
    
    vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
    
    sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });

    string result;
    for (const auto& pair : freqVec) {
        result += string(pair.second, pair.first);
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    string sortedString = frequencySort(s);
    cout << sortedString << endl;

    return 0;
}
