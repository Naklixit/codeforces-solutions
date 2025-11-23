#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int wrong_even = 0;
        int wrong_odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (i % 2 != arr[i] % 2) {
                if (i % 2 == 0) {
                    wrong_even++;
                } else {
                    wrong_odd++;
                }
            }
        }
        if (wrong_even != wrong_odd) {
            cout << -1 << endl;
        } else {
            cout << wrong_even << endl;
        }
    }
}
