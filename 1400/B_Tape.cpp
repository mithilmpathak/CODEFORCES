#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;

    vector<ll> b(n);
    for(ll i=0;i<n;i++) cin>>b[i];

    vector<ll> gaps(n-1);
    for(ll i=0;i<n-1;i++){
        gaps[i] = b[i+1] - b[i] - 1;
    }
    sort(gaps.begin(), gaps.end());
    
    ll ans = n;
    for(ll i=0;i<(n-k);i++){
        ans += gaps[i];
    }
    cout<<ans<<"\n";
    return 0;
}