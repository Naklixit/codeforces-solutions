#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int need = n - m;
        int cutLeft = min(need, -l);
        int cutRight = need - cutLeft;
        int l2 = l + cutLeft;
        int r2 = r - cutRight;
        cout << l2 << " " << r2 << endl;
    }
}