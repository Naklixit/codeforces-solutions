#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        bool perfect = true;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(arr[i] - arr[i + 1]);
            if (diff != 5 && diff != 7) {
                perfect = false;
                break;
            }
        }
        (perfect) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}
