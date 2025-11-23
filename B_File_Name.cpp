#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'x') {
            cnt++;
        } else {
            if (cnt >= 3) {
                res += cnt - 2;
            }
            cnt = 0;
        }
    }
    if (cnt >= 3) {
        res += cnt - 2;
    }
    cout << res << endl;
}