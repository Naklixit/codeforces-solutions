#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int total = 0;
        int len = 0;
        int temp = x;
        int d = x % 10;
        while (temp > 0) {
            len++;
            temp /= 10;
        }
        total = (d - 1) * 10 + len * (len + 1) / 2;
        cout << total << endl;
    }
}