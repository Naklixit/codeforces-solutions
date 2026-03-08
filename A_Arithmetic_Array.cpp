#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        int k;
        if (sum >= n) {
            k = sum - n;
        } else {
            cout << 1 << endl;
            continue;
        }
        cout << k << endl;
    }
}