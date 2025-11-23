#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> roundNums;
        int place = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                roundNums.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }
        cout << roundNums.size() << endl;
        for (int num : roundNums) {
            cout << num << " ";
        }
        cout << endl;
    }
}
