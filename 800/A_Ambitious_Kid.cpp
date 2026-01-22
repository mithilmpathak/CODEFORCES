#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n;i++){
            cin>>a[i];
        }
        ll ans = LLONG_MAX;
        for(ll i=0;i<n;i++){
            ans = min(ans, abs(a[i]));
        }
        cout<<ans<<"\n";
    return 0;
}