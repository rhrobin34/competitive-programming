#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a=0,b=0,c=0,d=0;
        cin>>n;
        while(n--)
        {
            int k;
            cin>>k;
            if(k>0)
            {
                a=1;
            }
            if(k<0)
            {
                b=1;
            }
            cin>>k;
            if(k>0)
            {
                c=1;
            }
            if(k<0)
            {
                d=1;
            }
        }
        if(4-a-b-c-d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    }
}
