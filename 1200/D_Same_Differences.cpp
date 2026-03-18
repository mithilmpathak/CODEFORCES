#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            mp[a[i] - i]++;
        }
        ll ans = 0;
        for(auto it:mp){
            ll x = it.second;
            ans += (x * (x - 1)) / 2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}