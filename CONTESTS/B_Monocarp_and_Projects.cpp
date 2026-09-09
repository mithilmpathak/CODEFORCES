#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;

        if(x == y){
            cout<<"0\n";
            continue;
        }
        ll d = y - x;
        
        if(d < x){
            cout<<k*d<<"\n";
            continue;
        }

        ll m = min(k, d - x + 1);

        ll ans = 0;
        for(ll i=0;i<m;i++){
            ans += d % (x+i);
        }
        ans += (k-m) * d;
        cout<<ans<<"\n";
    }
    return 0;
}