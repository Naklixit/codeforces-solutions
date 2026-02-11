#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool hasFair = false;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                hasFair = true;
                break;
            } else {
                hasFair = false;
            }
        }
        cout << (hasFair ? 1 : s.size()) << endl;
    }
}