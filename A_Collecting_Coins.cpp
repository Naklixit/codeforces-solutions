#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int max_coin = max(max(a, b), c);
        int need = (max_coin - a) + (max_coin - b) + (max_coin - c);
        int r = n - need;
        if (n < need) {
            cout << "NO" << endl;
        } else if (r % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}