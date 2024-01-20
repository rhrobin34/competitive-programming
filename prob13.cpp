#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>arr(n,0);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int p=0;
        for(int i=0; i<x; i++)
        {
            p-=arr[i];
        }
        for(int i=x; i<n; i++)
        {
            p+=arr[i];
        }
        int ans=p;
        for(int i=0; i<k; i++)
        {
            p+=arr[i];
            if(i+x<n)
            {
                p-=arr[i+x]*2;
            }
            ans=max(ans,p);
        }
        cout <<ans<<endl;
    }
}