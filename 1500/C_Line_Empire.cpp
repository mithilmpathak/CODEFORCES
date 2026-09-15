#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        vector<ll> x(n+1);
        for(ll i=1;i<=n;i++) cin>>x[i];

        vector<ll> ss(n+2,0);
        ss[n] = x[n];
        for(ll i=n-1;i>0;i--){
            ss[i] += ss[i+1] + x[i];
        }

        ll ans = LLONG_MAX;
        for(ll i=0;i<=n;i++){
            ll c = x[i]*(a + b) + (ss[i+1] - (n - i)*x[i]) * b;

            ans = min(ans, c);
        }
        cout<<ans<<"\n";
    }
    return 0;
}