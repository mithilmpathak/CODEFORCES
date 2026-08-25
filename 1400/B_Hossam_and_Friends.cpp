#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        // vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        vector<int> notfren(n+1,n+1);
        while(m--){
            int x, y;
            cin>>x>>y;
            if(y < x) swap(x, y);
            notfren[x] = min(notfren[x], y);
        }
        ll ans = 0;
        int limit = n+1;
        for(int i=n;i>=1;i--){
            limit = min(limit, notfren[i]);
            ans += (limit - i);
        }
        cout<<ans<<"\n";
    }
    return 0;
}