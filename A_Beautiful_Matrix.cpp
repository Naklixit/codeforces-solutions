#include <iostream>
using namespace std;
int main() {
    int val = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> val;
            (val == 1) ? cout << abs(i - 2) + abs(j - 2) : cout << "";
        }
    }
}