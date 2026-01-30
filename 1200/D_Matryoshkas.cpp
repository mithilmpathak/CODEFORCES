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
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            mp[a[i]]++;
        }
        ll ans  =0;
        for(auto& [ele,f] : mp){
            ll sub = 0;
            if(mp.find(ele-1) != mp.end()) sub = mp[ele-1];
            ans += max(1LL*0, f - sub);
        }
        cout<<ans<<endl;
    }
    return 0;
}