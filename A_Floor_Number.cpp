#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {

            int pfloor = ceil((double)(n - 2) / x);
            cout << pfloor + 1 << endl;
        }
    }
}







