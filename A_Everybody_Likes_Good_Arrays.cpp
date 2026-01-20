#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int currentLength = 1;
        int totalOperation = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++) {
            if ((a[i] % 2 == 0 && a[i - 1] % 2 == 0) ||
                (a[i] % 2 != 0 && a[i - 1] % 2 != 0)) {
                currentLength += 1;
                // cout << currentLength << endl;
            } else {
                totalOperation += currentLength - 1;
                currentLength = 1;
            }
        }
        totalOperation += currentLength - 1;
        cout << totalOperation << endl;
    }
}
