#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n + 1];
        int cntNeg;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cntNeg = count(arr, arr + n, -1);
        int needSum = 0;
        if (cntNeg > n / 2) {
            needSum = cntNeg - n / 2;
            cntNeg = cntNeg - needSum;
        }
        if (cntNeg % 2 != 0) {
            cntNeg--;
            needSum++;
        }
        int res = needSum + (cntNeg % 2);
        cout << res << endl;
    }
}