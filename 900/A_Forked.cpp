#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll kx, ky, qx, qy;
        cin>>kx>>ky>>qx>>qy;
        set<pair<ll,ll>> knight;
        set<pair<ll,ll>> knightQ;
        set<pair<ll, ll>> moves = {
            {1,-1},
            {-1,1},
            {1,1},
            {-1,-1}
        };
        for(auto& it : moves){
            knight.insert(make_pair(kx + it.first * a, ky + it.second * b));
            knight.insert(make_pair(kx + it.first * b, ky + it.second * a));
        }
        for(auto& it : moves){
            knightQ.insert(make_pair(qx + it.first * a, qy + it.second * b));
            knightQ.insert(make_pair(qx + it.first * b, qy + it.second * a));
        }
        ll ans = 0;
        for(auto& queen : knightQ){
            if(knight.find(queen) != knight.end()) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}