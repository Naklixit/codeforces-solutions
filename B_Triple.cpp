#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> cnt;
        bool found = false;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (++cnt[x] == 3 && !found) {
                cout << x << "\n";
                found = true;
            }
        }
        if (!found)
            cout << -1 << "\n";
    }
}
