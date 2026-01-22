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
        ll a[n];
        for(ll i= 0;i<n;i++) cin>>a[i];
        map<ll, ll> mp;
        for(ll i = 0;i<n;i++){
            mp[a[i]]++;
        }
        if(mp.size() >= 3){
            cout<<"NO\n";
        } else{
            ll f1 = mp.begin()->second;
            ll f2 = mp.rbegin()->second;
            if(f1 == f2){
                cout<<"YES\n";
            } else if((n & 1) == 1 && abs(f1 - f2) == 1){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}