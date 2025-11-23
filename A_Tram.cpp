#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    cin >> n;
    int still = 0;
    int capacity = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        still -= a;
        still += b;
        capacity = max(capacity, still);
    }
    cout << capacity;
}