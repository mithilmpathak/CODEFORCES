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
        vector<pair<ll, char>> v;
        ll curr = 1;
        for(ll i=1;i<n;i++){
            if(s[i] == s[i-1]){
                curr++;
            }
            else{
                v.push_back({curr, s[i-1]});
                curr = 1;
            }
        }
        v.push_back({curr, s[n-1]});

        ll blocksReplaced = 0;
        for(ll i=1;i<v.size()-1;i++){
            if(v[i].first == 1){
                if(v[i-1].second == v[i+1].second){
                    blocksReplaced = 2;
                    break;
                } 
                else{
                    blocksReplaced = 1;
                }
            }
        }
        
        cout<<v.size() - blocksReplaced <<"\n";
    }
    return 0;
}