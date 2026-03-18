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
        ll MOD = 1e9 + 7;
        ll ans = 1;
        ll it = k;
        while(it--){
            ans = (ans * n) % MOD;
        }
        cout<<ans<<"\n";
    }
    return 0;
}