#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y,ans = 0;
        cin>>n>>x>>y;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll sum = 0;
        vector<ll> tmp(n);
        for(ll i=0;i<n;i++){
            tmp[i] += (a[i] / x) * y;
            sum += tmp[i];
        }
        for(ll i=0;i<n;i++){
            ll curr = a[i] + (sum - tmp[i]);
            ans = max(ans, curr);
        }
        cout<<ans<<endl;
    }
    return 0;
}