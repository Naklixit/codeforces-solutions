#include <ctype.h>
#include <iostream>
#include <string>
using namespace std;
string to_lower(string &s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    s1 = to_lower(s1);
    s2 = to_lower(s2);
    cout << (s1 == s2 ? 0 : (s1 < s2 ? -1 : 1));
}