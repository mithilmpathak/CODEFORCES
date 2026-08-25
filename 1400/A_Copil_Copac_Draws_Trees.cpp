#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<pair<int,int>>> graph(n+1);

        for(int i=0;i<n-1;i++){
            int u, v;
            cin>>u>>v;
            graph[u].push_back({v,i});
            graph[v].push_back({u,i});
        }

        vector<int> dist(n+1, 0);
        queue<pair<int,int>>q;
        q.push({1, 0});
        dist[1] = 1;
        int ans = 1;
        while(!q.empty()){
            auto [u, prev] = q.front();
            q.pop();

            for(auto& [v, edgei] : graph[u]){
                if(dist[v] != 0){
                    continue;
                }
                dist[v] = dist[u];

                if(prev > edgei){
                    dist[v]++;
                }

                ans = max(ans, dist[v]);

                q.push({v, edgei});
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}