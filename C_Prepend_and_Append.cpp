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
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                l++;
                r--;
            } else {
                break;
            }
        }
        cout << (l > r ? 0 : r - l + 1) << endl;
    }
}