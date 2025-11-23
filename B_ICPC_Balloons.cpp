#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        cin >> s;
        unordered_set<char> solved;
        int total = 0;
        for (char c : s) {
            if (solved.find(c) == solved.end()) {
                total += 2;
                solved.insert(c);
            } else {
                total += 1;
            }
        }
        cout << total << endl;
    }
}
