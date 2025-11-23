#include <iostream>
#include <set>
using namespace std;
void solve() {
    int n;
    string s;
    cin >> n >> s;`
    if (n < 26) {
        cout << "NO";
        return;
    }
    set<char> letters;
    for (char c : s) {
        letters.insert(tolower(c));
    }

    cout << (letters.size() == 26 ? "YES" : "NO");
}
int main() { solve(); }
