#include <iostream>
#include <vector>
#include <string>

using ll = long long;
using namespace std;

int solve(string s, string v) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != v[i]) {
            return 0;
        }
    }

    return 1;
}

int match(string s, vector<pair<string, string>> v) {
    int x, y;

    x = s.size();

    for (int i = 0; i < v.size(); i++) {
        string temp = v[i].first;

        y = temp.size();

        if (x == y) {
            int r = solve(s, v[i].first);

            if (r) {
                temp = v[i].second;

                y = temp.size();

                if (x > y) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }

    return -1; 
}

int main() {
    ll t, m, n, o;

    cin >> m >> n;

    vector<pair<string, string>> v;

    for (int i = 0; i < n; i++) {
        string str, str1;

        cin >> str >> str1;

        v.push_back(make_pair(str, str1));
    }

    string s[m];

    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < m; i++) {
        int r = match(s[i], v);

        if (r == 1) {
            cout << v[i].second << " ";
        }
    }

    cout << endl;

    return 0;
}
