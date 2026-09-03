#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        map<ll, ll> freq;

        ll cnt = 0;

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;

            if (x % k) {
                freq[k - x % k]++;
                cnt++;
            }
        }

        if (cnt == 0) {
            cout << "0\n";
            continue;
        }

        ll ma = 0, rem = 0;

        for (auto &[r, f] : freq) {
            if (f > ma || (f == ma && r > rem)) {
                ma = f;
                rem = r;
            }
        }

        cout << (ma - 1) * k + rem + 1 << '\n';
    }

    return 0;
}