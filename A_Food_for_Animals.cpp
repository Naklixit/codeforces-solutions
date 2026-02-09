#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define ld long double
#define ar array

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7; // 998244353

void solve() {}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int needA = max(0, x - a);
        int needB = max(0, y - b);
        cout << ((needA + needB <= c) ? "YES" : "NO") << endl;
    }
}