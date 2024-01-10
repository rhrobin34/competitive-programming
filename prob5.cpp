#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = -1;

        for (int i = s.size() - 1; i; i--)
        {
            if (s[i] >= '5')
            {
                s[i - 1]++;
                n = i;
            }
        }

        if (s[0] >= '5')
        {
            cout << '1';
            n = 0;
        }
        for (int i = n; i < s.size(); i++)
        {
            s[i] = '0';
        }

        cout << s << endl;
    }
}
