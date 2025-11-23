#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string result;
    for (int i = 0; i < s1.size(); i++) {
        result += (s1[i] != s2[i]) ? '1' : '0';
    }
    cout << result;
}