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
        vector<ll> nums(n);
        for(ll i=0;i<n;i++){
            cin>>nums[i];
        }
        if(k>=2){
            cout<<"YES\n";
        } else{
            bool isSorted = true;
            for(ll i = 1;i<n;i++){
                if(nums[i] < nums[i-1]){
                    isSorted = false;
                    break;
                }
            }
            if(isSorted){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}