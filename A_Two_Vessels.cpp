#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int diff = abs(a - b);
        int ans = (diff + 2 * c - 1) / (2 * c);
        cout << ans << '\n';
    }

    return 0;
}