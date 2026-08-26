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
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        ll streak = 0;
        ll ans =0;
        for(ll i=0;i<n-1;i++){
            if(a[i] < 2*a[i+1]){
                streak++;
            }
            else{
                if(streak >= k){
                    ans += (streak - k + 1);
                }
                streak = 0;
            }
        }
        if(streak >= k){
            ans += (streak - k + 1);
        }
        cout<<ans<<"\n";
    }
    return 0;
}