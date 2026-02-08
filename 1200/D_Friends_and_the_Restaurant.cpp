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
        vector<ll>x(n), y(n);
        for(ll i=0;i<n;i++) cin>>x[i];
        for(ll i=0;i<n;i++) cin>>y[i];
        for(ll i=0;i<n;i++) y[i] -= x[i];
        sort(y.begin(), y.end(), greater<ll>());
        ll left = 0, right = n-1;
        ll ans = 0;
        while(left < right){
            if(y[left] + y[right] >= 0){
                ans++;
                left++;
                right--;
            } else{
                right--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}