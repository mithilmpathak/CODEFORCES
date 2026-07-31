#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, x, y;
        cin>>n>>x>>y;
        // vector<ll> a(n);
        map<pair<ll, ll>, ll> mp;
        ll ans = 0;
        for(ll i=0; i<n; i++) {
            ll a;
            cin>>a;
            ll rx = a % x;
            ll ry = a % y;
            ll need_x = (x - rx) % x;
            // ll need_y = (y - ry) % y;
            ans += mp[{need_x, ry}];
            mp[{rx, ry}]++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}