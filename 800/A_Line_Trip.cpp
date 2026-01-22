#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        ll ans = -1;
        vector<ll>stations(n);
        for(ll i=0; i<n;i++){
            cin>>stations[i];
        }
        for(ll i = 1;i<n;i++){
            ans = max(ans, stations[i] - stations[i-1]);
        }
        ans = max(ans, ((x - stations[n-1]) << 1));
        ans = max(ans, stations[0]);
        cout<<ans<<"\n";
    }    
    return 0;
}