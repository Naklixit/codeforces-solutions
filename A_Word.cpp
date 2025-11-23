#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count_lower = 0;
    int count_upper = 0;
    for (char c : s) {
        (islower(c)) ? count_lower++ : count_upper++;
    }
    bool to_upper = count_upper > count_lower;
    for (char &c : s) {
        c = to_upper ? toupper(c) : tolower(c);
    }
    cout << s;
}
