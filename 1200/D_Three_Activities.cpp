#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll> max3(vector<ll>& a){
    vector<pair<ll,ll>> tmp(a.size());
    for(ll i=0;i<tmp.size();i++){
        tmp[i].first = a[i];
        tmp[i].second = i;
    }
    sort(tmp.rbegin(), tmp.rend());
    vector<ll> ans(3);
    for(ll i=0;i<3;i++){
        ans[i] = tmp[i].second;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n), b(n), c(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        for(ll i=0;i<n;i++){
            cin>>c[i];
        }
        vector<ll> A = max3(a), B = max3(b), C = max3(c);
        ll ans = 0;
        for(ll i=0;i<3;i++){
            for(ll j=0;j<3;j++){
                for(ll k=0;k<3;k++){
                    ll x = A[i], y = B[j], z = C[k];
                    if(x != y && y != z && z != x){
                        ans = max(ans, a[x] + b[y] + c[z]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}