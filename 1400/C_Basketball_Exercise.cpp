#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n), b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    vector<vector<ll>> dp(n, vector<ll>(2,0));

    // dp[i][j] : at ith index, to ending in array j
    dp[0][0] = a[0];
    dp[0][1] = b[0];

    for(ll i=1;i<n;i++){
        dp[i][0] = max(dp[i-1][0], dp[i-1][1] + a[i]);
        dp[i][1] = max(dp[i-1][1], dp[i-1][0] + b[i]);
    }
    cout<<max(dp[n-1][0], dp[n-1][1])<<"\n";
    return 0;
}