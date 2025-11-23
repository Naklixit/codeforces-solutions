#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int n;
    int a[101];
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int common;
        int different = -1;

        if (a[0] == a[1] || a[0] == a[2]) {
            common = a[0];
        } else {
            common = a[1];
        }

        for (int i = 0; i < n; i++) {
            if (a[i] != common) {
                different = i + 1;
                break;
            }
        }
        cout << different << endl;
    }
}
