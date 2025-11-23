#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[55];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool giam = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] > 1) {
                giam = false;
                break;
            }
        }
        if (giam) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
