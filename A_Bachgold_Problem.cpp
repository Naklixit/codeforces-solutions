#include <iostream>
using namespace std;
int main() {
    int n;
    int k;
    cin >> n;
    k = n / 2;
    if (n % 2 == 0) {
        cout << k << endl;
        for (int i = 0; i < k; i++)
            cout << 2 << " ";

    } else {
        cout << k << endl;
        for (int i = 0; i < k - 1; i++) {
            cout << 2 << " ";
        }
        cout << 3 << " ";
    }
}
