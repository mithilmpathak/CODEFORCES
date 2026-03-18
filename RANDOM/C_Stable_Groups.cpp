#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    
    ll prev = a[0];
    vector<ll> diff;
    for(ll i=1;i<n;i++){
        ll d = a[i] - a[i-1];
        if(d > x) diff.push_back(d);
    }
    sort(diff.begin(), diff.end());
    ll ans = diff.size() + 1;
    for(auto& it : diff){
        ll need = (it / x) + (it % x != 0) - 1;
        if(k == 0 || k < need) break;
        k -= need;
        ans--;
    }
    cout<<ans<<"\n";
    return 0;
}