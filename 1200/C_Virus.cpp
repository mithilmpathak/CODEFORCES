#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>infected(m);
        for(ll i=0;i<m;i++) cin>>infected[i];
        sort(infected.begin(), infected.end());
        vector<ll> gap;
        for(ll i=1; i<m;i++){
            gap.push_back(infected[i] - infected[i-1] - 1);
        }
        gap.push_back(n - infected[m-1] + infected[0] - 1);
        sort(gap.begin(), gap.end(), greater<ll>());
        ll ans = 0, days = 0;
        for(auto& g : gap){
            ll curr = g - days * 2;
            if(curr <= 0) break;
            ans++;
            if(curr - 2 > 0){
                ans += curr -2;
            }
            days += 2;
        }
        cout<<n - ans<<endl;
    }
    return 0;
}