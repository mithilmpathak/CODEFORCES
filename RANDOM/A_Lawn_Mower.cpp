#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,w;
        cin>>n>>w;
        ll cnt = n / w;
        ll rem = n % w;
        ll ans = cnt * (w - 1) + min(w-1, rem);
        cout<<ans<<endl;
    }
    return 0;
}