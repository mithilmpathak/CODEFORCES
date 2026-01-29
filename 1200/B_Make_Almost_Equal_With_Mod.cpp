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
        for(ll i=0;i<n;i++) cin>>a[i];
        ll ans = 0;
        for(ll i=1; i<=60; i++){
            set<ll> s;
            ll k = 1LL << i;
            for(ll idx = 0; idx<n;idx++){
                s.insert(a[idx] % k);
            }
            if(s.size() == 2){
                ans = k;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}