#include <math.h>

#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int a, b, c;
    int sum = 0;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        sum = a + b + c;
        int maxVal = max({a, b, c});
        cout << ((sum - maxVal == maxVal) ? "YES" : "NO") << endl;
    }
}








