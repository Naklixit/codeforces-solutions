#include <cmath>
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    char cur = 'a';
    int diff;
    int total = 0;
    for (char c : s) {
        int diff = abs(c - cur);
        total += min(diff, 26 - diff);
        cur = c;
    }
    cout << total << endl;
}