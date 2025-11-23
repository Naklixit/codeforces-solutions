#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> m(10);
        for (int i = 0; i < 10; i++) {
            cin >> m[i];
        }
        long long total = 0;
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++) {
                if (m[i][j] == 'X') {
                    int ly = min({i, 9 - i, j, 9 - j});
                    total += ly + 1;
                }
            }
        cout << total << endl;
    }
}