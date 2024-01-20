#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100010;
pair<int, int> arr[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i].second;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i].first;
        }
        sort(arr, arr + n);
        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < m; i++)
        {
            if (sum1 == 0)
            {
                sum1++;
                sum2 += n;
            }
            if (arr[i].first < n and sum1 < m)
            {
                if (m >= sum1 + arr[i].second)
                {
                    sum2 += arr[i].first * arr[i].second;
                    sum1 += arr[i].second;
                }
                else
                {
                    sum2 += arr[i].first * (m - sum1);
                    sum1 = m;
                    break;
                }
            }else{
                sum2+=n*(m-sum1);
                break;
            }
        }
        cout << sum2 << endl;
    }
}
