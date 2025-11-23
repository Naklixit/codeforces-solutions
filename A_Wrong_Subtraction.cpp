#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        (n % 10 != 0) ? n -= 1 : n /= 10;
    }
    cout << n;
}
