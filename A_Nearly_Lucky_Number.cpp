#include <iostream>
using namespace std;
int main() {
    string n;
    cin >> n;
    int count_luckynums = 0;
    for (char &ch : n) {
        if (ch == '4' || ch == '7') count_luckynums++;
    }
    (count_luckynums == 4 || count_luckynums == 7) ? cout << "YES"
                                                   : cout << "NO";
}