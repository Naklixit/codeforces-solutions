#include <iostream>
using namespace std;
int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int kvalue = arr[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += (arr[i] >= kvalue && arr[i] != 0) ? 1 : 0;
    }
    cout << count << endl;
    return 0;
}