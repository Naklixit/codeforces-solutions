#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    const string target = "codeforces";
    while(t--)
    {
        string s;
        cin>>s;
        int differ = 0;
      for(int i = 0;i<10;i++)
      {
        if(s[i] != target[i])
        {
            differ++;
        }
      }
      cout<<differ<<endl;
    }
    
}