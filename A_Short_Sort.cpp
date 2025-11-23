#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());
        if (sorted_s == "abc") {
            int diff = 0;
            for (int i = 0; i < 3; ++i) {
                if (s[i] != 'a' + i) ++diff;
            }
            if (diff <= 2) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
}
