#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int res = 0;
        if (k > n) {
            res = k - n;
        }
        if (n >= k && (n - k) % 2 != 0) {
            res = 1;
        } else if (n >= k && (n - k) % 2 == 0) {
            res = 0;
        }

        cout << res << endl;
    }
}