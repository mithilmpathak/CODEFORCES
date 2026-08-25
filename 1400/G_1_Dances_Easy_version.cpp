#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<ll>a(n);
        vector<ll>b(n);
        a[0] = 1;

        bool b_has_one = false;
        for(ll i=1;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) {
            cin>>b[i];
            // if(b[i] == 1) b_has_one - true;
        }

        sort(b.rbegin(), b.rend());
        sort(a.begin(), a.end(), greater<ll>());

        ll ai = 0, bi = 0;
        
        ll ans = 0;
        while(ai < n && bi < n){
            if(a[ai] < b[bi]){
                ai++;
                bi++;
            } else{
                ai++;
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}