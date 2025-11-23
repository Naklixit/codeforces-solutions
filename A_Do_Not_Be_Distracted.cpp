#include <iostream>
#include <set>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        set<char> loopChar;
        bool distracted = false;
        loopChar.insert(s[0]);
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (loopChar.count(s[i])) {
                    distracted = true;
                    break;
                }
                loopChar.insert(s[i]);
            }
        }
        cout << (distracted ? "NO" : "YES") << endl;
    }
}