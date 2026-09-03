#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll MAX_COLORS = 100000;
ll solve(vector<ll>& v){
    sort(v.begin(), v.end(), greater<>());
    ll n = v.size();
    ll ans = 0;
    for(ll i=0, j = n-1; i<n; i++, j-=2){
        ans += j * v[i];
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    int a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
            a[i][j]--;
        }
    }
    vector<vector<ll>> x(MAX_COLORS);
    vector<vector<ll>> y(MAX_COLORS);

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            x[a[i][j]].push_back(i);
            y[a[i][j]].push_back(j);
        }
    }
    ll ans= 0;

    for(ll color = 0; color < MAX_COLORS; color++){
        ans += solve(x[color]);
        ans += solve(y[color]);
    }
    cout<<ans;
    return 0;
}