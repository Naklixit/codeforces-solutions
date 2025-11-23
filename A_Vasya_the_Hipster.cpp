#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int fashion_days = min(a, b);
    int same_days = (abs(a - b)) / 2;
    cout << fashion_days << " " << same_days;
}