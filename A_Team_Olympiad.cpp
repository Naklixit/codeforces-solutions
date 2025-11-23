#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> programming, math, PE;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            programming.push_back(i);
        } else if (t == 2) {
            math.push_back(i);
        } else {
            PE.push_back(i);
        }
    }
    int teams = min({programming.size(), math.size(), PE.size()});
    if (teams == 0) {
        cout << 0;
    }
    for (int i = 0; i < teams; i++) {
        cout << programming[i] << " " << math[i] << " " << PE[i] << endl;
    }
}
