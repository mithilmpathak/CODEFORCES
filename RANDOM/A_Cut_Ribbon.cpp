#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a,b,c;

ll solve(ll n, ll i){
    if(i == 0) return 0;
    if(i<0) return LLONG_MIN;
    return 1 + max({solve(n, i - a), solve(n, i-b), solve(n, i-c) });
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    ll n;
    cin>>n>>a>>b>>c;

    // cout<<solve(n, n)<<"\n";

    vector<ll> dp(n + 1,LLONG_MIN);
    dp[0] = 0;
    for(ll i=1;i<=n;i++){
        if(i >= a){
            dp[i] = max(dp[i], 1 + dp[i-a]);
        }
        if(i >= c){
            dp[i] = max(dp[i], 1 + dp[i-c]);
        }
        if(i >= b){
            dp[i] = max(dp[i], 1 + dp[i-b]);
        }
    }

    cout<<dp[n]<<"\n";
    return 0;
}