#include <math.h>

#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int div = ceil(1.0 * abs(a - b) / 10);
        cout << div << endl;
    }
}