#include<bits/stdc++.h>
using ll = long long;
using namespace std;
 
int main(){
	ll t;
 
	cin>>t;
 
	while(t--){
		int n,sum=0;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2==0)
        {
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}

		