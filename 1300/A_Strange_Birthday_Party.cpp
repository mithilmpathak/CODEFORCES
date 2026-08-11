#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<ll> K(n);
        for(ll i=0;i<n;i++) cin>>K[i];
        vector<ll> costs(m);
        for(ll i=0;i<m;i++) cin>>costs[i];

        sort(K.rbegin(), K.rend());

        ll ans = 0;
        ll p=0;
        for(ll i=0;i<n;i++){
            if(p < m && costs[p] < costs[K[i] - 1]){
                ans += costs[p];
                p++;
            } else{
                ans += costs[K[i] - 1];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}