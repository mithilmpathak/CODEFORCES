#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll P = 0,M = 0;
    for(char c: s){
        if(c=='+') P++;
        else M++;
    }
    ll q;
    cin>>q;
    while(q--){
        ll a, b;
        cin>>a>>b;
        if(a == b){
            if(P==M) cout<<"YES\n";
            else cout<<"NO\n";
            continue;
        }
        ll numerator = b * (M-P);
        ll denominator = a - b;
        if(numerator % denominator != 0){
            cout<<"NO\n";
            continue;
        }
        ll z = numerator / denominator;
        if(-M <= z && z <= P) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}