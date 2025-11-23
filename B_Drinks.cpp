#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x;
    double sum = 0.0, percent = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    percent = sum / n;
    cout << fixed << setprecision(12) << percent;
}