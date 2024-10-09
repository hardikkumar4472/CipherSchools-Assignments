#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> ngeMap;
    stack<int> st;

    for (int i = 0; i < nums2.size(); ++i) {
        while (!st.empty() && nums2[i] > st.top()) {
            ngeMap[st.top()] = nums2[i];
            st.pop();
        }
        st.push(nums2[i]);
    }

    while (!st.empty()) {
        ngeMap[st.top()] = -1;
        st.pop();
    }

    vector<int> result;
    for (int i = 0; i < nums1.size(); ++i) {
        result.push_back(ngeMap[nums1[i]]);
    }

    return result;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> nums1(n1), nums2(n2);
    for (int i = 0; i < n1; ++i) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n2; ++i) {
        cin >> nums2[i];
    }

    vector<int> result = nextGreaterElement(nums1, nums2);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}
