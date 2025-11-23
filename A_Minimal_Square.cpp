#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int min_side = min(a, b);
        int max_side = max(a, b);
        int side = max(min_side * 2, max_side);
        int total = side * side;
        cout << total << endl;
    }
}
