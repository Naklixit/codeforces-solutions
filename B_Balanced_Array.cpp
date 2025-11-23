#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            vector<int> even,odd;
            int sum_even =0 , sum_odd =0;
            for(int i = 1;i<=n/2;i++)
            {
                 int val = i*2;
                 even.push_back(val);
                 sum_even +=val; 
            }
            for(int i = 1;i<n/2;i++)
            {
               int val = (i*2)-1;
                odd.push_back(val);
                sum_odd +=val;
            }
            int last_odd = sum_even - sum_odd;
            odd.push_back(last_odd);
            for(int x:even) cout<<x<<" ";
            for(int x:odd) cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0 ;
}