#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for (int k = 0; k <= 6; k++)
            for (int d = 1; d <= 9; d++) {
                int x = d * pow(10, k);
                if (x <= n) {
                    cnt++;
                }
            }
        cout << cnt << endl;
    }
}