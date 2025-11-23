#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[i + 1]) {
            count++;
        }
    }
    (count & 1) ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";
}