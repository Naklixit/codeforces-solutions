#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a = 0, b = 0;
        string s;
        cin >> s;
        for (char &c : s) {
            (c == 'A') ? a++ : b++;
        }
        cout << ((a > b) ? 'A' : 'B') << endl;
    }
}