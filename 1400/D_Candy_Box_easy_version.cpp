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
        vector<ll> cnt(n + 1, 0);
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            cnt[x]++;
        }

        vector<ll> freq;
        for(ll i=1;i<=n;i++){
            if(cnt[i]){
                freq.push_back(cnt[i]);
            }
        }

        if(freq.size() == 0){
            cout<<"0\n";
            continue;
        }

        sort(freq.rbegin(), freq.rend());
        
        ll ans = freq[0];
        ll allowed = freq[0];
        for(ll i=1;i<freq.size();i++){
            allowed = max(0LL, min(freq[i], allowed - 1));
            ans += allowed;
            if(allowed == 0) break;
        }

        cout<<ans<<"\n";
    }
    return 0;
}