#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> mp;
    string maxTwoGram;
    int maxCount = 0;
    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);
        mp[twoGram]++;
        if (mp[twoGram] > maxCount) {
            maxCount = mp[twoGram];
            maxTwoGram = twoGram;
        }
    }
    cout << maxTwoGram << endl;
    return 0;
}