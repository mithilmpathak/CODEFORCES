#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin >> a[i];

        vector<ll> maxSetBit(31, 0);

        for(int i=0;i<n;i++){
            for(int bit = 30; bit>=0; bit--){
                if(a[i] & (1 << bit)){
                    maxSetBit[bit]++;
                    break;
                }
            }
        }
        ll ans = 0;
        for(int i=0;i<31;i++){
            ans += (maxSetBit[i] * (maxSetBit[i] - 1)) / 2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}