#include <iostream>
using namespace std;
int main() {
    int count = 0;
    int Limak, Bob;
    cin >> Limak >> Bob;
    while (Limak <= Bob) {
        Limak *= 3;
        Bob *= 2;
        count++;
    }
    cout << count;
}