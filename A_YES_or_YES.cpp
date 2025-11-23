#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    string s;
    for (int i = 1; i <= t; i++) {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << ((s == "yes") ? "YES" : "NO") << endl;
    }
}
















