#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        string s, t;
        cin>>s>>t;
        unordered_map<char,int> mp;
        for(char& c : s){
            mp[c]++;
        }
        bool flag = true;
        for(char& c : t){
            if(mp.find(c) == mp.end() || mp[c] == 0){
                flag = false;
                break;
            } else{
                mp[c]--;
            }
        }
        if(!flag){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    

    return 0;
}