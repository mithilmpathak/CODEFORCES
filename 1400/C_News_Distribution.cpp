#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> parent;
vector<ll> sz;
build(ll n){
    parent.resize(n);
    sz.resize(n,1);
    for(ll i=0;i<n;i++) parent[i] = i;
}

ll find(ll u){
    if(parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}

void unionn(ll u, ll v){
    u = find(u);
    v = find(v);
    if(u != v){
        if(sz[u] < sz[v]) swap(u,v);
        parent[v] = u;
        sz[u] += sz[v];
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,m;
    cin>>n>>m;

    build(n);

    for(ll i=0;i<m;i++){
        ll k;
        cin>> k;
        if(k==0) continue;
        ll leader;
        cin>>leader;
        leader--;
        for(ll j=1;j<k;j++){
            ll v;
            cin>>v;
            v--;
            unionn(leader, v);
        }
    }

    vector<ll> cnt(n,0);
    for(ll i=0; i<n; i++){
        ll par = find(i);
        cout<<sz[par]<<" ";
    }
    
    cout<<"\n";
    return 0;
}