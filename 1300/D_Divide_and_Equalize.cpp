#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    vector<ll> primes;
    
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        
        map<ll,ll> mp;

        for(ll i=0;i<n;i++){
            ll curr = a[i];

            for(ll p=2; p * p <= curr; p++){
                if(curr % p == 0){
                    while(curr % p == 0){
                        curr /= p;
                        mp[p]++;
                    }
                }
            }
            if(curr > 1){
                mp[curr]++;
            }
        }
        bool flag = true;
        for(auto& it : mp){
            if(it.second % n != 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}