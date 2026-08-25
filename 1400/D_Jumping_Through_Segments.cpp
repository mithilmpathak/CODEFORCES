#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool possible(vector<vector<ll>>& seg, ll k, ll n){
    ll left = 0, right = 0;
    for(ll i=0;i<n;i++){
        left -= k;
        right += k;
        ll reachStart = max(left, seg[i][0]);
        ll reachEnd = min(right, seg[i][1]);
        if(reachStart > reachEnd) return false;
        left = reachStart;
        right = reachEnd;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll left = 0;
        ll right = 0;
        vector<vector<ll>> seg(n,vector<ll>(2));
        for(ll i=0;i<n;i++){
            cin >> seg[i][0] >> seg[i][1];
            right = max(right, seg[i][1]);
        }

        ll ans = LLONG_MAX;
        while(left <= right){
            ll mid = left + (right - left) / 2;
            if(possible(seg, mid, n)){
                ans = min(ans, mid);
                right = mid - 1;
            } else{
                left = mid + 1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}