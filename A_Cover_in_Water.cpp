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
        int cnt = 0;
        int flag = true;
        for (int i = 0; i <= n; i++) {
            if (s[i] == '.') {
                cnt++;
                if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
                    cout << 2 << endl;
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            cout << cnt << endl;
        }
    }
}