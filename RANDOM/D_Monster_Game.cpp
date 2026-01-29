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
        vector<ll>a(n), b(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        sort(a.begin(), a.end());
        for(ll i=1; i<n;i++){
            b[i] += b[i-1];
        }
        ll ans = 0;
        // for(ll i=0;i<n;i++){
        //     ll curr = n - i;
        //     ll x = a[i];
        //     ll l = 0, r = n-1;
        //     while(l < r){
        //         ll mid = l + (r-l)/2;
        //         if(b[mid] == curr){
        //             l = mid;
        //             break;
        //         }
        //         if(b[mid] < curr){
        //             l = mid + 1;
        //         } else{
        //             r = mid - 1;
        //         }
        //     }
        //     ans = max(ans, x * (l + 1));
        // }
        ll j = n-1;
        for(ll i=0;i<n;i++){
            ll curr = n-i;
            while(j >= 0 && b[j] > curr){
                j--;
            }
            ans = max(ans, a[i] * (j+1));
        }
        cout<<ans<<endl;
    }
    return 0;
}