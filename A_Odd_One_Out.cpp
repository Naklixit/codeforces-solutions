#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    // while (t--) {
    //     int a, b, c;
    //     cin >> a >> b >> c;
    //     if (a == b) {
    //         cout << c << endl;
    //     } else if (b == c) {
    //         cout << a << endl;

    //     } else {
    //         cout << b << endl;
    //     }
    // }
    // return 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        unordered_map<int, int> freq;
        freq[a]++;
        freq[b]++;
        freq[c]++;
        for (auto &p : freq) {
            if (p.second == 1) {
                cout << p.first << endl;
            }
        }
    }
    return 0;
}