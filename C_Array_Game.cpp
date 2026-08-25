#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        if(k >= 3){
            cout<<"0\n";
            continue;
        }
        
        sort(a.begin(), a.end());

        vector<ll> diffs;

        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                diffs.push_back(abs(a[i] - a[j]));
            }
        }

        sort(diffs.begin(), diffs.end());

        ll ans = LLONG_MAX;
        for(auto& num : a){
            ans = min(ans, num);
        }

        ans = min(ans,diffs[0]);

        if(k == 2){
            for(ll i=0;i<n;i++){
                auto it = lower_bound(diffs.begin(), diffs.end(), a[i]);
                if(it != diffs.end()){
                    ans = min(ans, abs(*it - a[i]));
                }
                if(it != diffs.begin()){
                    --it;
                    ans = min(ans, abs(*it -a[i]));
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}