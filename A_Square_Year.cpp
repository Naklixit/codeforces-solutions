#include <bits/stdc++.h>
using namespace std;
int isPerfectSquare(int n) {
    int square = sqrt(n);
    return square * square == n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int year = stoi(s);
        int a = 0;
        int b = sqrt(year);
        if (isPerfectSquare(year)) {
            cout << a << " " << b << endl;
        } else {
            cout << -1 << endl;
        }
    }
}