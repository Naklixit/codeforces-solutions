#include <iostream>
using namespace std;
int main() {
    string borze;
    cin >> borze;
    string output;
    for (int i = 0; i < borze.size();) {
        if (borze[i] == '.') {
            output += '0';
            i++;
        } else if (borze[i] == '-') {
            if (borze[i + 1] == '.') {
                output += '1';
                i += 2;
            } else if (borze[i + 1] == '-') {
                output += '2';
                i += 2;
            }
        }
    }
    cout << output;
}
