#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(ll x, ll y){
    return (x/ gcd(x,y)) * y;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll ans = 0;
        ll LCM = lcm(x,y);
        ll cntX = n/x - n/LCM;
        ll cntY = n/y - n/LCM;
        ll add = cntX * (2*n - cntX + 1) / 2;
        ll sub = cntY * (cntY + 1) / 2;
        cout<< add - sub<<endl;
    }
    return 0;
}