#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int Y, W;
    cin >> Y >> W;
    int maxScore = max(Y, W);
    int total = 6;
    int favorable = total - maxScore + 1;
    int defaction = __gcd(favorable, total);
    cout << favorable / defaction << "/" << total / defaction << endl;
}