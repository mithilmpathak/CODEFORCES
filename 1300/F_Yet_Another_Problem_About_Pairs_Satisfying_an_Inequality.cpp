#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n+1);
        vector<ll> validIndices;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
            if(a[i] < i) validIndices.push_back(i);
        }

        ll ans = 0;

        for(ll j:validIndices){
            ll target = a[j];
            ll it = lower_bound(validIndices.begin(), validIndices.end(), target) - validIndices.begin();
            ans += it;
        }
        cout<<ans<<"\n";
    }
    return 0;
}