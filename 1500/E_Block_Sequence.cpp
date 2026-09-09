#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(vector<ll>& a, ll i, ll n, vector<ll>& memo){
    if(i >= n) return 0;

    if(memo[i] != -1) return memo[i];

    ll skip = 1 + solve(a, i + 1, n, memo);

    ll take = LLONG_MAX;
    if(i + a[i] + 1 <= n){
        take = solve(a, i + a[i] + 1, n, memo);
    }

    return memo[i] = min(skip, take);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> memo(n, -1);
        for(auto& it:a) cin>>it;

        cout<<solve(a, 0, n, memo)<<"\n";
    }
    return 0;
}