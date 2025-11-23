#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> Marathon(4);
        for (int i = 0; i < 4; i++) {
            cin >> Marathon[i];
        }
        int Timur = Marathon[0];
        int count = 0;
        for (int i = 0; i < 4; i++) {
            if (Marathon[i] > Timur) {
                count++;
            } 
        }
        cout << count << endl;
    }
}