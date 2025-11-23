#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll m;
        cin >> n >> m;
        vector<ll> a(n + 1);
        vector<ll> b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i];
        }
        a[0] = 0;
        b[0] = 0;
        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            ll l = a[i] - a[i - 1];
            ll p = b[i - 1] ^ b[i];
            if (l % 2 == p)
                ans += l;
            else
                ans += l - 1;
        }
        ans += m - a[n];
        cout << ans << endl;
    }
}
