#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string pi = "3141592653589793238462643383279";
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == pi[i]) {
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;
    }
}
