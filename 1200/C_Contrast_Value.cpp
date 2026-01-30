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
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<ll> temp;
        for(ll i=0; i<n;i++){
            if(i == 0 || a[i] != a[i-1]){
                temp.push_back(a[i]);
            }
        }
        ll m = temp.size();
        if(m <= 2){
            cout<<m<<endl;
            continue;
        }
        ll ans = 2;
        for(ll i=1; i<m - 1; i++){
            if((temp[i] > temp[i-1] && (temp[i] > temp[i+1])) ||
            (temp[i] < temp[i-1] && temp[i] < temp[i+1])){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}