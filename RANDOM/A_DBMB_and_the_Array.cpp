#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,s,x;
        cin>>n>>s>>x;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll sum = 0;
        for(ll i=0;i<n;i++){
            sum += a[i];
        }
        if(sum > s || (s - sum) % x != 0){
            cout<<"NO\n";
        } else{
            cout<<"YES\n";
        }
    }
    return 0;
}