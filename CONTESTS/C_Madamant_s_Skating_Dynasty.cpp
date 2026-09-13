#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 998244353;

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

ll modInverse(ll n) {
    return power(n, MOD - 2);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    vector<ll> fact(n + 1, 1);
    for (int i = 1; i <= n; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    vector<ll> ss(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        ss[i] = (ss[i + 1] + a[i]) % MOD;
    }

    ll ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        ll cnt = n - 1 - i;
        ll sum_diff = (ss[i + 1] - cnt * (a[i] % MOD)) % MOD;
        if (sum_diff < 0) sum_diff += MOD;

        ll tmp = (fact[n - 1] * modInverse(cnt)) % MOD;
        ans = (ans + sum_diff * tmp) % MOD;
    }

    cout << ans << "\n";
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