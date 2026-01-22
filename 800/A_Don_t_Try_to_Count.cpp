#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(string& x, string& s){
    ll n = x.size(), m = s.size();
    for(ll i= 0; i + m - 1 < n; i++){
        if(x.substr(i, m) == s) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        ll ans = 0;
        while(x.size() < s.size()){
            x += x;
            ans++;
        }
      
        if(check(x,s)){
            cout<<ans<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}