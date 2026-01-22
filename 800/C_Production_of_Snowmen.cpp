#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n;
ll solve(vector<ll>& A, vector<ll>& B){
    vector<bool> isInvalid(n,false);
    for(ll i = 0;i<n;i++){
        for(ll j = 0; j<n; j++){
            if(A[j] >= B[(i + j) % n]){
                isInvalid[i] = true;
                break;
            }
        }
    }
    ll ans = 0;
    for(bool it : isInvalid){
        if(!it) ans++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> A(n);
        vector<ll> B(n);
        vector<ll> C(n);
        for(ll i=0;i<n;i++){
            cin>>A[i];
        }
        for(ll i=0;i<n;i++){
            cin>>B[i];
        }
        for(ll i=0;i<n;i++){
            cin>>C[i];
        }
        ll first = solve(A, B);
        ll second = solve(B, C);
        ll ans = n * first * second;
        cout<<ans<<endl;
    }
    return 0;
}