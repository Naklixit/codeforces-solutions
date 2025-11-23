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
        int current = 0;
        int best = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                current++;
            } else {
                best = max(best, current);
                current = 0;
            }
        }
        best = max(best, current);
        cout << best << "\n";
    }
}