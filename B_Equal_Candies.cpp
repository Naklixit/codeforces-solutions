#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long arr[n];
        long long min_val = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            min_val = min(min_val, arr[i]);
        }
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i] - min_val;
        }
        cout << sum << endl;
    }
}