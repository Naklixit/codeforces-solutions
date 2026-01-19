#include <algorithm>
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int posMin, posMax;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1)
                posMin = i + 1;
            if (a[i] == n)
                posMax = i + 1;
        }
        int fromLeft = max(posMin, posMax);
        int fromRight = max(n - posMin + 1, n - posMax + 1);
        int fromLeftAndRight =
            min(posMin, posMax) + min(n - posMin + 1, n - posMax + 1);
        int minMoves = min({fromLeft, fromRight, fromLeftAndRight});
        cout << minMoves << endl;
    }
}