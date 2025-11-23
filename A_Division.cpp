#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t, rating;
    cin >> t;
    vector<pair<int, string>> divisions = {{1900, "Division 1"},
                                           {1600, "Division 2"},
                                           {1400, "Division 3"},
                                           {-5000, "Division 4"}};
    while (t--) {
        cin >> rating;
        for (auto &d : divisions) {
            if (rating >= d.first) {
                cout << d.second << endl;
                break;
            }
        }
    }
    return 0;
}