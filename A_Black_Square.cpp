#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for(int i = 0;i<4;i++)
    {
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int total = 0;
    for(int i = 0; i<s.size();i++)
    {
        int strip = s[i] - '1';
        total += arr[strip];
    }
    // for(char c : s)
    // {
    //     int stripIndex = c - '1';
    //     total += arr[stripIndex];
    // }
    cout<<total;
    
}