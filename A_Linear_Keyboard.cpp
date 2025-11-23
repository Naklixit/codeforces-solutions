#include <iostream>
#include <map>
#include <math.h>
using namespace std;
map<char, int> buildMap(const string &k) {
    map<char, int> mp;
    for (int i = 0; i < k.size() - 1; i++) {
        mp[k[i]] = i + 1;
    }
    return mp;
}
int calculateDis(const string &w, const map<char, int> mp) {
    int s = 0;
    for (int i = 0; i < w.size() - 1; i++) {
        s += abs(mp.at(w[i]) - mp.at(w[i + 1]));
    }
    return s;
}
void solution() {
    string k, w;
    cin >> k >> w;
    map<char, int> mp = buildMap(k);
    int s = 0;
    s = calculateDis(w, mp);
    cout << s << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}
