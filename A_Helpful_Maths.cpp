#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> nums;
    for (char c : s) {
        (c != '+') ? nums.push_back(c - '0') : void();
    }
    sort(nums.begin(), nums.end());
    for (size_t i = 0; i < nums.size(); ++i) {
        (i > 0) ? cout << "+" : cout << "";
        cout << nums[i];
    }
    cout << endl;
}
