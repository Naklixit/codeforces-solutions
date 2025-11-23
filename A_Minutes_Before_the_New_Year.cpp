#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;
        int time_left = 0;
        int total_m = h * 60 + m;
        int max_time = 1440;
        time_left = max_time - total_m;
        cout << time_left << endl;
    }
}