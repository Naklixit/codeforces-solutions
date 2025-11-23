#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        int min_index = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        arr[min_index] += 1;
        long long product = 1;
        for (auto x : arr) product *= x;
        cout << product << endl;
    }
}
