/*************************[Rahat Hasan Robin]**************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 10000007
const ll MOD = 1000000007;
map<string, string> mp;
int m, n;
string s1, s2;
void SPEED()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    SPEED();
    cin >> n >> m;
    while (m--)
    {
        cin >> s1 >> s2;
        mp[s1] = s2;
    }
    while (n--)
    {
        cin >> s1;
        if (mp[s1].size() < s1.size())
            cout << mp[s1] << " ";
        else
            cout << s1 << " ";
    }

    return 0;
}