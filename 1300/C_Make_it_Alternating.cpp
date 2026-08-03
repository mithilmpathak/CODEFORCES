#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll MOD = 998244353;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll ans = 1; // number of diff sequences
        ll n = s.size();
        ll curr = 1; // curr seq length
        ll ansl = 1; // ans length

        for(ll i=1; i<n;i++){
            if(s[i] != s[i-1]){
                ansl++;
                ans = (ans * curr) % MOD;
                curr = 1;
            } else{
                curr++;
            }
        }
        ans = (ans * curr) % MOD;

        for(ll i=1; i<=n-ansl;i++){
            ans = (ans * i) % MOD;
        }

        cout<< n - ansl << " " << ans << "\n";
    }
    return 0;
}