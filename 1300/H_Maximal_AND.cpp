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
        vector<ll>a(n);
        vector<ll> bitCount(31,0);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            for(ll j=0;j<31;j++){
                if((a[i] >> j) & 1){
                    bitCount[j]++;
                }
            }
        }

        ll ans = 0;

        for(ll j=30;j>=0;j--){
            ll req = n - bitCount[j];
            if(k >= req){
                ans |= (1LL << j);
                k -= req;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}