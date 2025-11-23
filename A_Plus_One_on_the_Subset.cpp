#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max_val = *max_element(arr, arr + n);
        int min_val = *min_element(arr, arr + n);
        count = max_val - min_val;
        cout << count << endl;
    }
}
