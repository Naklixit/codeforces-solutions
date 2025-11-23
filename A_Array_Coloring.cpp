#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, sum = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
        }
        if (sum % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
