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
        vector<ll> a(n), b(n);
        for(ll i=0 ;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0 ;i<n;i++){
            cin>>b[i];
        }
        ll total = 0;
        ll maxbi = 0;
        ll ans = 0;
        for(ll i=0;i<min(n,k);i++){
            total += a[i];
            maxbi = max(maxbi, b[i]);
            ans = max(ans, total + (k - i - 1) * maxbi);
        }
        cout<<ans<<endl;
    }
    return 0;
}