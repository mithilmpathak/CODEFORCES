#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;

        ll ans = 0;
        for(ll i=1; i*i<=n; i++){
            if(n%i != 0) continue;
            
            ll d1 = i;
            ll d2 = n/i;

            if(d1 <= k){
                ans = max(ans, d1);
            }
            if(d2 <= k){
                ans = max(ans, d2);
            }
        }
        cout<<n / ans<<"\n";
    }
    return 0;
}