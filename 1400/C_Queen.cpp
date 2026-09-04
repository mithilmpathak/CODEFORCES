#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> ans;



int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> parent(n+1);
    vector<ll> c(n+1);
    vector<bool> hasGoodChild(n+1, false);

    ll root = -1;
    for(ll i=1;i<=n;i++){
        cin>>parent[i]>>c[i];
        if(parent[i] == -1) root = i;
    }

    for(ll i=1;i<=n;i++){
        if(parent[i] != -1 && c[i] == 0){
            hasGoodChild[parent[i]] = true;
        }
    }

    vector<ll> ans;

    for(ll i=1;i<=n;i++){
        if(i != root && c[i] == 1 && !hasGoodChild[i]) ans.push_back(i);
    }

    if(ans.empty()){
        cout<<"-1\n";
    } else{
        for(ll x: ans){
            cout<<x<<' ';
        }
        cout<<"\n";
    }
    return 0;
}