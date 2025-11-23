#include <math.h>

#include <iostream>
using namespace std;
bool isPrimeNum(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int nextPrime = n + 1;
    while (!isPrimeNum(nextPrime)) {
        nextPrime++;
    }
    if (nextPrime == m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}