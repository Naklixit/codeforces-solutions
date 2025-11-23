#include <iostream>
using namespace std;
int main() {
    int n, x(0);
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        x += (s[1] == '+') ? 1 : -1;
    }
    cout << x << endl;
}