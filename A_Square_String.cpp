#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int length = s.length();
        if (length % 2 != 0) {
            cout << "NO" << endl;
        } else {
            string s1 = s.substr(0, length / 2);
            string s2 = s.substr(length / 2, length / 2);
            if (s1 == s2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}