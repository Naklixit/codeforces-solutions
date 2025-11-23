#include <iostream>
#include <set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> seats;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i == 0) {
                seats.insert(x);
                continue;
            }
            if (seats.find(x - 1) == seats.end() &&
                seats.find(x + 1) == seats.end()) {
                ok = false;
            }
            seats.insert(x);
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
