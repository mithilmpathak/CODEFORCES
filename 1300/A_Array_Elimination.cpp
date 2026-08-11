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
        vector<ll> freq(30,0);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            for(ll j=0; j<30;j++){
                ll tmp = ((a[i] >> j) & 1);
                freq[j] += tmp;
            }
        }

        ll ans = freq[0];
        for(ll i=1;i<30;i++){
            ans = gcd(ans, freq[i]);
        }
        if(ans == 0){
            for(ll i=1; i<=n;i++) cout<<i<<" ";
        } else{
            for(ll i=1; i<= ans; i++){
                if(ans % i == 0) cout<<i<<" ";
            }
        }
        cout<<"\n";
        // cout<<ans<<"\n";
    }
    return 0;
}