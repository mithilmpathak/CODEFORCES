#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<ll>ps(n+1);
        ps[0] = 0;
        for(ll i=0;i<n;i++){
            ps[i+1] = ps[i] + a[i];
        }
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            ll ns = (r - l + 1) * k;
            if((ps[n] - ps[r] + ps[l - 1] + ns) % 2 == 1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}