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
        vector<ll> b(n), a;
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        a.push_back(b[0]);
        for(ll i=1;i<n;i++){
            if(b[i] >= b[i-1]){
                a.push_back(b[i]);
            } else{
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        cout<<a.size()<<"\n";
        for(ll i=0; i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}