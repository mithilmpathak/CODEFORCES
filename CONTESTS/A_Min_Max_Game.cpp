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
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        ll cnt = 0;
        for(ll i=0;i<n;i++) cnt += a[i];

        if((cnt << 1) >= n) cout<<"Bessie\n";
        else cout<<"Elsie\n";
    }
    return 0;
}