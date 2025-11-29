#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string res = s.substr(0, s.size() - 2) + 'i';
        cout << res << endl;
    }
}