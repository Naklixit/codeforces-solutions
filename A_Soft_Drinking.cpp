#include <iostream>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int mililiters = k * l;
    int slices = c * d;
    int saltOfToasts = p / np;
    int toasts = min(mililiters / nl, min(slices, saltOfToasts));
    cout << toasts / n << endl;
    return 0;
}