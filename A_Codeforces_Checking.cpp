#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string code = "codeforces";
        bool check = false;
        char c;
        cin >> c;
        for (long long i = 0; i < code.size(); i++) {
            if (c == code[i]) {
                check = true;
            }
        }
        if (check) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}










