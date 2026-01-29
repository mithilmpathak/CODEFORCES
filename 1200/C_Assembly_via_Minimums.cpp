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
        ll N = n * (n-1) / 2;
        vector<ll>a(N);
        for(ll i=0;i<N;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll ptr = n - 1, i =0;
        while(ptr > 0){
            cout<<a[i]<<" ";
            i += ptr;
            ptr--;
        }
        cout<<1000000000<<endl;
    }
    return 0;
}