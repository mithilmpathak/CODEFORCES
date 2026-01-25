#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        ll ans = 1, curr = 1;
        for(ll i= 1;i<n;i++){
            if(a[i] - a[i-1] <= k ){
                curr++;
            } else{
                curr = 1;
            }
            ans = max(ans, curr);
        }
        cout<<n - ans<<endl;
    }
    return 0;
}