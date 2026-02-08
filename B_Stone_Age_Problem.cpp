#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--){
        ll n, q;
        cin>>n>>q;
        ll sum = 0;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) sum += a[i];
        while(q--){
            ll c;
            cin>>c;
            ll i,b;
            if(c==1){
                cin>>i>>b;
            } else{
                cin>>b;
            }
            if(c == 1){
                sum += b - a[i-1];
                a[i-1] = b;
            } else{
                for(ll j=0;j<n;j++) a[j] = b;
                sum = n*b;
            }
            cout<<sum<<endl;
        // }
    }
    return 0;
}