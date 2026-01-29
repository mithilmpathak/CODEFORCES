#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n);
        vector<ll>b(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        a[n-1] = max(a[n-1], b[n-1]);
        for(ll i= n-2;i>=0;i--){
            a[i] = max(a[i], max(a[i+1], b[i]));
        }
        for(ll i=1;i<n;i++){
            a[i] += a[i-1];
        }
        while(q--){
            ll l,r;
            cin>>l>>r;
            if(l==1){
                cout<<a[r-1]<<" ";
            } else{
                cout<<a[r-1] - a[l-2]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}