#include<bits/stdc++.h>
using namespace std;

#define ll long long

int log(ll n){
    return 64 - __builtin_clzll(n) - 1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll case1a = log((3*a + 1)) >> 1;
        ll case2a = log(((3*a) >> 1) + 1 ) >> 1;
        ll case1b = log(((3*b) >> 1) + 1 ) >> 1;
        ll case2b = log((3*b + 1)) >> 1;
        // ll ans = min(case1a, case1b) << 1;
        // ll ans = max( min(case1a, case1b), min(case2a, case2b)) << 1;
        ll ans;


        if(case1a <= case1b){
            ans = (case1a << 1);
        } else{
            ans = (case1b << 1) + 1;
        }
        ll tempans;
        if(case2b <= case2a){
            tempans = (case2b << 1);
        } else{
            tempans = (case2a << 1) + 1;
        }
        ans = max(ans, tempans);

        cout<<ans<<endl;
    }   
    return 0;
}