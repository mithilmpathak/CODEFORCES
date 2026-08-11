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
        vector<ll> K(n);
        vector<vector<ll>> armor(n);
        for(ll i=0;i<n;i++){
            cin>>K[i];
            for(ll j=0;j<K[i];j++){
                ll arm;
                cin>>arm;
                armor[i].push_back(arm - j);
            }
        }

        vector<pair<ll,ll>> searchSpace;
        for(ll i=0;i<n;i++){
            ll maxi = 0;
            for(ll j=0;j<armor[i].size();j++){
                maxi = max(maxi, armor[i][j] + 1);
            }
            searchSpace.push_back({maxi, armor[i].size()});
        }

        sort(searchSpace.begin(), searchSpace.end());


        ll low = searchSpace[0].first;
        ll high = searchSpace[n-1].first;

        ll ans = LLONG_MAX;

        while(low <= high){
            ll mid = low + (high - low)/2;

            ll curr = mid;
            bool ded = false;
            for(ll i=0;i<n;i++){
                if(searchSpace[i].first <= curr){
                    curr += searchSpace[i].second;
                } else{
                    ded = true;
                    break;
                }
            }
            if(!ded){
                ans = min(ans, mid);
                high = mid - 1;
            } else{
                low = mid + 1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}