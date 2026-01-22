#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k,odd = 0;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll>a(26,0);
        for(auto& c : s){
            a[c - 'a']++;
        }
        
        for(ll i=0;i<26;i++){
            if((a[i] & 1) == 1) odd++;
        }

        if(odd > k + 1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}