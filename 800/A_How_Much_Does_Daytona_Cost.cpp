#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        bool found = false;
        for(ll i=0;i<n;i++){
            if(a[i] == k){
                found = true;
                break;
            }
        }
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}