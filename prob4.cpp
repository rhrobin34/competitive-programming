#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> arr;
    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        arr.push_back(make_pair(A, B));
    }
    set<int> v;
    v.insert(1);
    bool f = true;
    for (auto d : arr) {
        int A = d.first;
        int B = d.second;
        if (v.find(A) != v.end() || v.find(B) != v.end()) {
            v.insert(A);
            v.insert(B);
        } else {
            f = false;
            break;
        }
    }
    if (v.size() == N) {
        cout << (f ? "NO" : "YES") << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
