#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;

        ll odd = 0;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            odd += (a[i] & 1);
        }
        odd %= 2;
        ll alice = x % 2, bob = (x + 3) % 2;
        ll target = y % 2;
        if(odd){
            alice = 1 - alice;
            bob = 1 - bob;
        }
        if(target == alice) cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    return 0;
}