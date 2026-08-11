#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll MAX_K = 1e9;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    vector<ll> precomp(MAX_K+1, 0);
    precomp[0] = 1;
    
    ll curr = 2;
    for(ll i=1; i<(MAX_K >> 1);i++){
        precomp[i] = precomp[i-1] + curr;
        curr++;
    }

    curr -= 2;

    for(ll i=(MAX_K >> 1); i<=MAX_K; i++){
        precomp[i] = precomp[i-1] + curr;
        curr--;
    }

    while(t--){
        ll k,x;
        cin>>k>>x;
        ll it = upper_bound(precomp.begin(), precomp.end(), x) - precomp.begin();
        
    }
    return 0;
}