#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f=0;
        int n;
        cin>>n;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            cout <<"No"<<endl;
        }else{
            cout <<"Yes"<<endl;
        }
    }
}