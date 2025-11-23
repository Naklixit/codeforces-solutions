#include <iostream>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;
    int n;
    for (int i = 1; i <= 10; i++) {
        if (i * k % 10 == 0 || (i * k) % 10 == r) {
            n = i;
            break;
        }
    }
    cout << n;
}