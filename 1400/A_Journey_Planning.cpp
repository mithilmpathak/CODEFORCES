#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>a(n+1);

    unordered_map<ll,ll> dp;
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        dp[a[i] - i] += a[i];
        ans = max(ans, dp[a[i] - i]);
    }

    cout<<ans<<"\n";
    return 0;
}