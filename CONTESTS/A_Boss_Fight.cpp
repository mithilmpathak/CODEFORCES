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
        map<ll,ll> mp;
        ll total = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            total += a[i];
            mp[a[i]]++;
        }
        ll maxCnt = 0;
        for(auto& it: mp){
            maxCnt = max(maxCnt, it.second);
        }
        
        ll slots = maxCnt - 1;
        ll avail = n - maxCnt;

        if(avail >= slots){

            cout<<total<<"\n";
        } else{
            ll v = 0;
            for(auto& it: mp){
                if(it.second == maxCnt){
                    v = it.first;
                    break;
                }
            }
            ll ans = total - (2*maxCnt - n - 2) * v;
            cout<<ans<<"\n";
        }
    }
    return 0;
}