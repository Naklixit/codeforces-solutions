#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 0;
    int d = 0;
    string s;
    cin >> s;
    for (char &ch : s) {
        if (ch == 'A') ++a;
    }
    d = n - a;
    cout << (a > d ? "Anton" : (a < d ? "Danik" : "Friendship"));
}