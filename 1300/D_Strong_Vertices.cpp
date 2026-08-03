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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            ll num;
            cin>>num;
            a[i] -= num;
        }
        ll maxi = *max_element(a.begin(), a.end());
        
        ll ans = 0;
        vector<ll> strong_vertices;

        for(ll i=0;i<n;i++){
            if(a[i] == maxi){
                ans++;
                strong_vertices.push_back(i+1);
            }
        }
        cout<<ans<<"\n";
        for(ll i=0;i<strong_vertices.size();i++){
            cout<<strong_vertices[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}