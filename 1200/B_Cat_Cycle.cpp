#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        k--;
        if(n % 2 == 0){
            ll ans = k % n;
            cout<< ans + 1 << endl;
        } else{
            ll val = n / 2;
            cout<< ((k + (k / val)) % n) + 1<< endl;
        }
    }
    return 0;
}