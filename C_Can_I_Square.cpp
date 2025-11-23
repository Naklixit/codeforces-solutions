#include <iostream>
#include <math.h>
using namespace std;
bool isPerfectSquare(long long sum) {
    long long sq = sqrt(sum);
    return (sq * sq == sum);
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        long long x;
        long long Sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            Sum += x;
        }
        cout << (isPerfectSquare(Sum) ? "YES" : "NO") << endl;
    }
}








 