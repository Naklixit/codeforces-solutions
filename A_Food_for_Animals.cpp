#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int needA = max(0, x - a);
        int needB = max(0, y - b);
        cout << ((needA + needB <= c) ? "YES" : "NO") << endl;
    }
}