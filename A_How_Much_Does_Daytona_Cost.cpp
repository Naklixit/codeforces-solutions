#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        bool found = false;
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == k) {
                found = true;
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}