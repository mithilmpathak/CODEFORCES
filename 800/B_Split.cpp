#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    if (!(cin >> t)) return 0;
    while (t--) {
        ll n;
        cin >> n;
        ll N = 2 * n;
        vector<ll> nums(N);
        for (ll i = 0; i < N; ++i) cin >> nums[i];

        unordered_map<ll,ll> freq;
        freq.reserve(N * 2);
        for (ll x : nums) ++freq[x];

        ll o = 0, e = 0;
        for (auto &p : freq) {
            if (p.second & 1) ++o;
            else ++e;
        }

        ll s = min(e, n); // how many even-count values we try to make odd in p
        if (o == 0 && ((s & 1) != (n & 1)) && s > 0) {
            // parity mismatch and no odd-count value to fix it -> reduce s by 1
            --s;
        }

        ll ans = o + 2 * s;
        cout << ans << '\n';
    }
    return 0;
}
