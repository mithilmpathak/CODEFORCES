#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll negatives = 0;
    ll positives = 0;

    ll cnt[2] = {1, 0};
    ll parity = 0;

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;

        if (x < 0) {
            parity ^= 1;
        }

        negatives += cnt[parity ^ 1];
        positives += cnt[parity];

        cnt[parity]++;
    }

    cout << negatives << " " << positives << '\n';

    return 0;
}