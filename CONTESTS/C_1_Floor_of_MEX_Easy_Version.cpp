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
        vector<ll>a(n+1);
        for(ll i=1;i<=n;i++) cin>>a[i];

        vector<ll> diff(n+2, 0);

        for(ll k=1;k<=n;k++){
            ll mex = a[k];
            ll left = mex * k;
            ll right = min(n-1, (mex + 1) * k - 1);

            if(left <= n-1){
                diff[left]++;
                if(right + 1 < n){
                    diff[right + 1]--;
                }
            }
        }

        vector<ll> B;
        ll curr = 0;
        for(ll i=0;i<n;i++){
            curr += diff[i];
            if(curr == 0){
                B.push_back(i);
            }
        }
        cout<<B.size()<<"\n";
        for(ll i=0;i<B.size();i++){
            cout<<B[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}