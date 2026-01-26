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
        for(ll i=0;i<n;i++) cin>>a[i];
        ll ans = abs(a[0] - 1);
        for(ll i=1; i<n;i++){
            ans = gcd(ans, abs(a[i] - i - 1));
        }
        cout<<ans<<endl;
    }
    return 0;
}