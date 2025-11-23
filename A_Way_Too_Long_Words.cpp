#include <string.h>

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string words;
        cin >> words;
        string result = (words.length() > 10)
                            ? string(1, words[0]) +
                                  to_string(words.length() - 2) + words.back()
                            : words;
        cout << result << endl;
    }
}