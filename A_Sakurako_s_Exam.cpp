#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 1) {
            cout << "NO" << endl;
        } else {
            if (a == 0 && b % 2 == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
}