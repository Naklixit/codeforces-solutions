#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            int temp = y;
            y = x;
            x = temp;
        }
        cout << x << " " << y << endl;
    }
}
