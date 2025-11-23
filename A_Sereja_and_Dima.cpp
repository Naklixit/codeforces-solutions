#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    int sereja = 0;
    int dima = 0;
    int left = 0;
    int right = n - 1;
    int turn = 0;
    int pick;
    while (left <= right) {
        if (cards[left] > cards[right]) {
            pick = cards[left];
            left++;
        } else {
            pick = cards[right];
            right--;
        }
        if (turn % 2 == 0) {
            sereja += pick;
        } else {
            dima += pick;
        }
        turn++;
    }

    cout << sereja << " " << dima;
}