#include <math.h>

#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        int max_int = max({a, b, c});
        int min_int = min({a, b, c});
        int medium = total - max_int - min_int;
        cout << medium << endl;
    }
}
