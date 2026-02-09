#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sumPileA = 0;
        int sumPileB = 0;
        sumPileA = pow(2, n) + pow(2, n / 2) - 2;
        sumPileB = pow(2, n + 1) - 2 - sumPileA;
        cout << abs(sumPileA - sumPileB) << endl;
    }
}