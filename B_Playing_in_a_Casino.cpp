#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> a(m,vector<ll>(n));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a[j][i];
            }
        }
        for(ll i=0;i<m;i++){
            sort(a[i].begin(), a[i].end());
        }
        ll ans = 0;
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                ans -= (a[i][j] * (n - j - 1));
                ans += (a[i][j] * j);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}