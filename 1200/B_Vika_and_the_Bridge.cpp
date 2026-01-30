#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<vector<ll>> pos(k+1);
        for(ll i=1; i<=k;i++){
            pos[i].push_back(0);
        }
        for(ll i=0; i<n;i++){
            pos[a[i]].push_back(i+1);
        }
        for(ll i=1; i<=k;i++){
            pos[i].push_back(n+1);
        }

        ll ans = n;
        for(ll i=1;i<=k;i++){
            ll maxi = 0, smaxi = 0;
            for(ll j=1; j<pos[i].size(); j++){
                ll diff = pos[i][j] - pos[i][j-1] - 1;
                if(diff > maxi){
                    smaxi = maxi;
                    maxi = diff;
                } else if(diff > smaxi){
                    smaxi = diff;
                }
            }
            ll temp = min(maxi, max(smaxi, maxi / 2));
            ans = min(ans, temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}