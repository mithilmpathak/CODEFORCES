#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll MOD = 1e9 + 7;
ll solve(ll n, ll k, ll prev){
    if(k == 0) return 1;
    ll ans = 0;
    // if(prev == -1){
    //     for(ll i=1;i<=n;i++){
    //         ans += solve(n,k-1, i);
    //     }
    // } else{
    //     for(ll i= prev;i<=n;i+=prev){
    //         ans += solve(n, k-1, i);
    //     }
    // }
    for(ll i=prev;i<=n;i+=prev){
        ans += solve(n, k-1, i);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,k;
    cin>>n>>k;

    // cout<<solve(n,k,-1)<<"\n";
    ll ans = 0;
    // for(ll i=1;i<=n;i++){
    //     ans += solve(n,k - 1,i);
    // }

    vector<ll> dp(n + 1,1);

    for(ll i = 2; i<=k;i++){
        vector<ll> newdp(n+1, 0);

        for(ll x=1;x<=n;x++){
            for(ll m = x; m<=n;m+=x){
                newdp[x] += dp[m];
                newdp[x] %= MOD;
            }
        }
        dp = newdp;

    }
    for(ll i=1;i<=n;i++){
        ans += dp[i];
        if(ans >= MOD) ans %= MOD;
    }
    cout<<ans<<"\n";
    return 0;
}