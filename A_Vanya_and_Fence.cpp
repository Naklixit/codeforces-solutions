#include <iostream>
using namespace std;
int main() {
    int n, h;
    cin >> n >> h;
    int x;
    int w;
    while (n--) {
        cin >> x;
        w += (x > h) ? 2 : 1;
    }
    cout << w;
}