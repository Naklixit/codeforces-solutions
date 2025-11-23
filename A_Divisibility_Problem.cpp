#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int a, b;
    int moves;
    while (t--) {
        cin >> a >> b;
        if (a % b == 0) {
            moves = 0;
        } else {
            moves = b - (a % b);
        }
        cout << moves << endl;
    }
}
