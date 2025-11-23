#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int l = 0;
    int u = 0;
    for (int i = 1;; ++i) {
        int c = i * (i + 1) / 2;
        if (u + c > n) break;
        u += c;
        l++;
    }
    cout << l;
}
