#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ans;
ll solve(ll node, vector<vector<ll>>& graph, string& colors){
    if(graph[node].size() == 0){
        if(colors[node-1] == 'W'){
            return 1;
        }
        return -1;
    }
    ll curr = 0;
    for(ll child: graph[node]){
        curr += solve(child, graph, colors);
    }
    curr += (colors[node-1] == 'W') ? 1 : -1;
    if(curr == 0){
        ans++;
    }
    return curr;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> parents(n+1);
        for(ll i=2; i<=n;i++){
            cin>>parents[i];
        }
        string colors;
        cin>>colors;
        vector<vector<ll>> graph(n+1);
        for(ll i=2;i<=n;i++){
            graph[parents[i]].push_back(i);
        }

        ans = 0;
        solve(1, graph, colors);
        cout<<ans<<"\n";
    }
    return 0;
}