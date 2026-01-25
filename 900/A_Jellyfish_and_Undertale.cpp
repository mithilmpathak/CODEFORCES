#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> tools(n);
        for(ll i=0;i<n;i++) cin>>tools[i];
        sort(tools.begin(), tools.end());
        ll ans = b;
        for(ll i=0; i<n;i++){
            ans += min(tools[i], a - 1);
        }
        cout<<ans<<"\n";
    }
    return 0;
}