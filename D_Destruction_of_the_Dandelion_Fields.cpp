#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll ans = 0, a;
        vector<ll> o;
        vector<ll> e;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a % 2 == 1)
                o.push_back(a);
            else
                e.push_back(a);
        }
        if (o.size() == 0) {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < e.size(); i++) {
            ans += e[i];
        }
        sort(o.begin(), o.end(), greater<>());
        for (int i = 0; i < (o.size() + 1) / 2; i++) {
            ans += o[i];
        }
        cout << ans << endl;
    }
}