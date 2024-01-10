#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test_case = 0; test_case < t; ++test_case) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Iterate through the array to find the required index
        bool found = false;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                found = true;
                break;
            }
        }

        // Output the result for the current test case
        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
