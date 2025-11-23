#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if ((s1[i] == 'R') != (s2[i] == 'R'))
            {
                check = false;
                break;
            }
        }
        cout << ((check) ? "YES" : "NO") << endl;
    }
}
