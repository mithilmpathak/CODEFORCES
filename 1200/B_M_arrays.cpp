#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin >> n >> m;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            a[i]%=m;
        }
        vector<ll> freq(m,0);
        for(ll i=0;i<n;i++){
            freq[a[i]]++;
        }
        ll ans = 0;
        for(ll i=0;i<m;i++){
            ll first = freq[i];
            ll second = freq[(m-i)%m];
            if(first == 0 && second == 0) continue;
            ll mini = min(first,second);
            first -= min(mini + 1, first);
            second -= min(mini + 1, second);
            ans++;
            ans += (first + second);
            freq[i] = 0;
            freq[(m-i)%m] = 0;
        }
        cout << ans << "\n";
    }
    return 0;
}