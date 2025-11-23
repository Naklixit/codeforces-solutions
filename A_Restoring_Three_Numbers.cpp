#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums(4);
    for (int i = 0; i < 4; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int Maximum = nums[3];
    int a = Maximum - nums[2];
    int b = Maximum - nums[1];
    int c = Maximum - nums[0];
    cout << a << " " << b << " " << c;
}