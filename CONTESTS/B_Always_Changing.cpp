#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Count run-length excess duplicates
    int extra0 = 0, extra1 = 0;
    int total0 = 0, total1 = 0;

    for (char c : s) {
        if (c == '0') total0++;
        else total1++;
    }

    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && s[j] == s[i]) {
            j++;
        }
        int len = j - i;
        if (s[i] == '0') {
            extra0 += (len - 1);
        } else {
            extra1 += (len - 1);
        }
        i = j;
    }

    // Check if enough opposite characters exist to balance the alternating sequence
    if (extra0 > extra1) {
        int need_ones = extra0 - 1; // need at least this many '1' deletions
        if (total1 < need_ones) {
            cout << "-1\n";
            return;
        }
        cout << extra0 + max(extra1, need_ones) << "\n";
    } else if (extra1 > extra0) {
        int need_zeros = extra1 - 1; // need at least this many '0' deletions
        if (total0 < need_zeros) {
            cout << "-1\n";
            return;
        }
        cout << extra1 + max(extra0, need_zeros) << "\n";
    } else {
        // Perfectly balanced
        cout << extra0 + extra1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}