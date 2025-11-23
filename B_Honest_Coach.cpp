#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;
int main() {

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int d = INT_MAX;
        for (int i = 1; i < n; i++) {
            d = min(d, abs(arr[i] - arr[i - 1]));
        }
        cout << d << endl;
    }
}
