#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int pos = 0;
    for (int i = 0; i < t.size(); i++) {
        if (s[pos] == t[i])
            pos++;
    }
    cout << pos + 1 << endl;
}