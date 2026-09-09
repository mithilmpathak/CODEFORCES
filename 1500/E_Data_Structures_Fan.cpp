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

        string s;
        cin>>s;

        ll q;
        cin>>q;

        vector<ll> px(n+1,0);
        for(ll i=0;i<n;i++){
            px[i+1] = px[i] ^ a[i];
        }

        ll xr[2] = {0,0};

        for(ll i=0;i<n;i++){
            xr[s[i] - '0'] ^= a[i];
        }

        while(q--){
            ll qt;
            cin>>qt;
            if(qt == 1){
                ll l, r;
                cin>>l>>r;
                l--; r--;
                ll range = px[r+1] ^ px[l];
                xr[0] ^= range;
                xr[1] ^= range;
            } else{
                ll g;
                cin>>g;
                
                cout<<xr[g]<<" ";
            }
        }
        cout<<"\n";

    }
    return 0;
}