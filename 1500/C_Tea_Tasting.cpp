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
        vector<ll> a(n+1), b(n+1), c(n+2), ans(n+1);
        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll i=1;i<=n;i++) cin>>b[i];

        for(ll i=1;i<=n;i++) b[i] += b[i-1];

        for(ll i=1;i<=n;i++){
            ll x = a[i] + b[i-1];
            ll j = upper_bound(b.begin(), b.end(), x) - b.begin();
            if(j>n){
                c[i]++;
            } else if(i == j){
                ans[i] += min(a[i], b[i] - b[i-1]);
            } else{
                ans[j] += x - b[j-1];
                c[i]++;
                c[j]--;
            }
        }

        for(ll i=1;i<=n;i++){
            c[i] += c[i-1];
            ans[i] += (c[i]) * (b[i] - b[i-1]);
        }
        for(ll i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}