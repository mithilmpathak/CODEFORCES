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
        vector<ll> nums(n);
        for(ll i = 0;i<n;i++) cin>>nums[i];
        if(nums[0]!=1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}