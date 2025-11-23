#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int timeParticipant = 5 - k;
    int arr[2000];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= timeParticipant) {
            count++;
        }
    }
    cout << count / 3;
}
