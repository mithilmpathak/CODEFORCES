#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<bool> possible(1e6 + 1, false);
    for(ll i=2;i<=10000;i++){
        ll curr = i * i * i;
        ll currGP = (curr - 1)/(i-1);
        while(currGP <= 1e6){
            possible[currGP] = true;
            curr *= i;
            currGP = (curr - 1)/(i-1);
        }
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(possible[n]){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
    return 0;
}