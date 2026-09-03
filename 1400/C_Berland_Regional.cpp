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
        vector<vector<ll>> univ(n);
        vector<ll> stud(n);
        vector<ll> power(n);
        for(ll i=0;i<n;i++){
            cin>>stud[i];
            stud[i]--;
        }
        for(ll i=0;i<n;i++){
            cin>>power[i];
        }
        for(ll i=0;i<n;i++){
            univ[stud[i]].push_back(power[i]);
        }

        for(ll i=0;i<n;i++){
            sort(univ[i].begin(), univ[i].end());
        }

        vector<vector<ll>>pre(n, vector<ll>(1, 0));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<univ[i].size();j++){
                pre[i].push_back(pre[i].back() + univ[i][j]);
            }
        }

        vector<ll> ans(n + 1, 0);
        for(ll i=0;i<n;i++){
            int sz = univ[i].size();
            for(ll k=1; k<=sz;k++){
                ans[k] += pre[i].back() - pre[i][sz % k];
            }
        }
        for(ll i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}