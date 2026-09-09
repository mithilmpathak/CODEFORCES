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
        vector<ll>a(n);
        for(auto& it:a) cin>>it;

        ll sum = accumulate(a.begin(), a.end(), 0LL);
        ll rem = sum / 2;
        ll ans = sum - rem;

        sort(a.rbegin(), a.rend());

        for(auto& it:a){
            if(rem <= 0) break;
            rem -= it;
            ans++;
        }

        cout<<ans<<"\n";

    }
    return 0;
}