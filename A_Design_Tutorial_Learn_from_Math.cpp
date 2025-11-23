#include <iostream>
using namespace std;
bool compositeNum(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int x, y;
    for (x = 4; x < n; x++) {
        y = n - x;
        if (compositeNum(x) && compositeNum(y)) {
            cout << x << " " << y << endl;
            break;
        }
    }
    return 0;
}