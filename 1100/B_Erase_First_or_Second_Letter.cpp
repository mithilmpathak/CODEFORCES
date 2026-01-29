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
        string s;
        cin>>s;
        vector<ll> v(26,0);
        ll distinct = 0;
        ll ans = 0;
        for(ll i=0;i<n;i++){
            ll curr = s[i] - 'a';
            if(v[curr] == 0){
                distinct++;
            }
            v[curr]++;
            ans += distinct;
        }
        cout<<ans<<endl;
    }
    return 0;
}