#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int v;
        int mx_v = 0;
        for (int i = 0; i < s.size(); i++) {
            v = s[i] - 'a' + 1;
            if (v > mx_v) {
                mx_v = v;
            }
        }
        cout << mx_v << endl;
    }
}