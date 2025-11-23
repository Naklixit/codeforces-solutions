#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++) {
        int P, V, T;
        cin >> P >> V >> T;
        result += (P + V + T >= 2) ? 1 : 0;
    }
    cout << result << endl;
    return 0;
}