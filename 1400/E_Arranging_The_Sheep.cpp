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

        
        vector<ll> indices;
        for(ll i=0;i<n;i++){
            if(s[i] == '*') indices.push_back(i);
        }
        ll ans = 0;
        int median = (indices.size() - 1) / 2;
        for(ll i=0;i<indices.size();i++){
            ans += abs(indices[i] - (indices[median] - median + i));
        }
        cout<<ans<<"\n";
    }
    return 0;
}