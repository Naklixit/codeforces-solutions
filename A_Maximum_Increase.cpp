#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mx = 1;
    int rs = 1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] > arr[i])
            rs++;
        else
            rs = 1;
        mx = max(mx, rs);
    }
    cout << mx << endl;
    return 0;
}
