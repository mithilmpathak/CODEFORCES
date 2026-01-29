#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(vector<ll>& a, ll i, ll x){
    if(x == 1) return 0;
    if(i == 0) return -1;

    ll exclude = solve(a, i-1, x);

    ll include = -1;
    if(x % a[i-1] == 0){
        ll sub = solve(a, i, x/a[i-1]);
        if(sub != -1){
            include = 1 + sub;
        }
    }
    if(exclude == -1) return include;
    if(include == -1) return exclude;
    return min(include, exclude);

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=1;i<=n;i++){
            ll ans = solve(a, n, i);
            cout<<ans<<" ";
        }
        cout<<endl;
        // vector<vector<ll>> dp(n+1, vector<ll>(n,0));

    }
    return 0;
}