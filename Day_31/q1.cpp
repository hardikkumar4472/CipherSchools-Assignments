#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nearestSmallerElement(vector<int>& A) {
    vector<int> G(A.size());
    stack<int> st;

    for (int i = 0; i < A.size(); ++i) {
        while (!st.empty() && st.top() >= A[i]) {
            st.pop();
        }

        if (st.empty()) {
            G[i] = -1;
        } else {
            G[i] = st.top();
        }

        st.push(A[i]);
    }

    return G;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    vector<int> G = nearestSmallerElement(A);

    for (int i = 0; i < G.size(); ++i) {
        cout << G[i] << " ";
    }

    cout << endl;

    return 0;
}
