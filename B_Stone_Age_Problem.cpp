#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    vector<pair<ll, ll>> a(n, {0,0});
    for(ll i=0;i<n;i++) cin>>a[i].first;
    ll sum = 0;
    for(ll i=0;i<n;i++) sum += a[i].first;
    pair<ll,ll> setAll = {0, -1};
    for(ll it = 1; it<=q; it++){
        ll type;
        cin>>type;
        if(type == 1){
            ll i, num;
            cin>>i>>num;
            i--;
            if(a[i].second > setAll.second){
                sum += (num - a[i].first);
            } else{
                sum += (num - setAll.first);
            }
            a[i].first = num;
            a[i].second = it;
        } else{
            ll num;
            cin>>num;
            setAll.first = num;
            setAll.second = it;

            sum = num * n;
        }
        cout<<sum<<endl;
    }
    return 0;
}