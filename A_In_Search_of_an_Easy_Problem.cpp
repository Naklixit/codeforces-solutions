#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool is_hard = false;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) {
            is_hard = true;
            break;
        }
    }
    cout << (is_hard ? "HARD" : "EASY");
}