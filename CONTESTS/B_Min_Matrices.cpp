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
        if(k < n || k >= 2*n){
            cout<<"-1\n";
            continue;
        }
        ll firstCol = k - n + 1;
        ll curr = 1;
        vector<vector<ll>>ans(n, vector<ll>(n, -1));
        for(ll j=0;j<firstCol;j++){
            ans[0][j] = curr;
            curr++;
        }
        for(ll j=1;j<n;j++){
            ans[j][j] = curr;
            curr++;
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(ans[i][j] == -1){
                    ans[i][j] = curr;
                    curr++;
                }
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}