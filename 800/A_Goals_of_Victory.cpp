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
        ll a[n-1];
        ll ans = 0;
        for(ll i=0;i<n-1;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n-1;i++){
            ans += a[i];
        }
        cout<<-1 * ans << "\n";
    }
    return 0;
}