#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int people_in_room;
    int room_capacity;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> people_in_room >> room_capacity;
        if (room_capacity - people_in_room >= 2) {
            count++;
        }
    }
    cout << count;
    return 0;
}