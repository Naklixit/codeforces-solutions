#include <iostream>
using namespace std;
int main() {
    int N, M; 
    cin >> N >> M;
    int mini_squares = N * M;
    int max_dominos = mini_squares / 2;
    cout << max_dominos << endl;
    return 0;
}