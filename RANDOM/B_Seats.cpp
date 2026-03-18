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
        
        ll ans = 0;
        vector<ll> pos;
        for(ll i=0;i<n;i++){
            if(s[i] == '1') pos.push_back(i);
        }
        ll curr = pos.size();
        if(curr == 0){
            cout<< (n + 2) / 3 <<endl;
            continue;
        }
        ll leading = pos[0], last = pos[pos.size()-1];
        ll ending = n - last - 1;
        curr += (leading) / 3;
        curr += (ending) / 3;
        for(ll i=0;i<pos.size() - 1;i++){
            ll diff = pos[i+1] - pos[i] - 1 ;
            if(diff > 0) curr += (diff-1) / 3;
        }
        
        cout<<curr<<endl;
    }
    return 0;
}