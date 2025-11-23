#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string tickets;
        cin >> tickets;
        int left = 0;
        int right = 5;
        int sum_left = 0;
        int sum_right = 0;
        while (left < 3 && right >= 3) {
            sum_left += tickets[left] - '0';
            sum_right += tickets[right] - '0';
            left++;
            right--;
        }
        cout << ((sum_left == sum_right) ? "YES" : "NO") << endl;
    }
}