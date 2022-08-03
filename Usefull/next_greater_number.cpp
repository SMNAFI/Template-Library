#include <bits/stdc++.h>
    using namespace std;

void next_greater(int a[], int n) {
    stack<int> st;
    int res[n];
    for(int i = n-1; i >= 0; i--) {
        while(!st.empty() && st.top() < a[i]) {         // if top is smaller than a[i], no need 
            st.pop();
        } 
        
        // now stack will be empty OR top is the next greater of a[i]
        if(st.empty()) {
            res[i] = -1;
        } else {
            res[i] = st.top();
        }

        st.push(a[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    next_greater(arr, n);
}