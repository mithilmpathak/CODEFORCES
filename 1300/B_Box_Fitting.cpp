#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, W;
        cin>>n>>W;
        vector<ll> widths(n);
        vector<ll> freq(22,0);
        
        for(ll i=0;i<n;i++) {
            cin>>widths[i];
            freq[log2(widths[i])]++;
        }

        ll ans = 0;
        ll boxesDone = 0;
        while(boxesDone < n){
            ll curr = W;
            for(ll i= 21; i>=0; i--){
                while(freq[i] && (1<<i) <= curr){
                    freq[i]--;
                    curr -= (1<<i);
                    boxesDone++;
                }
            }
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}