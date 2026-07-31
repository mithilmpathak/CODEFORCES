#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) {
            cin>>a[i];
        }
        vector<ll> prev(n, -1);
        for(ll i=1;i<n;i++){
            if(a[i] != a[i-1]){
                prev[i] = i-1;
            } else{
                prev[i] = prev[i-1];
            }
        }
        ll q;
        cin>>q;
        while(q--){
            ll l, r;
            cin>>l>>r;
            l--; r--;
            if(prev[r] >= l){
                cout<<prev[r]+1<<" "<<r+1<<"\n";
            } else{
                cout<<"-1 -1\n";
            }
        }
        cout<<"\n";
    }
    return 0;
}