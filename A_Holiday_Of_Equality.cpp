#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_value = *max_element(arr.begin(), arr.end());
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += max_value - arr[i];
    }
    cout << result;
}