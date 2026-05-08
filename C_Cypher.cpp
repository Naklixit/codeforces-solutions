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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++) {
            int b;
            string s;
            cin >> b >> s;
            int change = 0;
            for (const char &c : s) {
                if (c == 'U')
                    change++;
                else
                    change--;
            }
            int ans = (a[i] - change + 10) % 10;
            cout << ans << " ";
        }
        cout << endl;
    }
}