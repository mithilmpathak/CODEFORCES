#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll n){
    if(n < 0) return 0;
    if(n <= 2) return n;
    if(n == 3) return 2;
    // return (1LL<<1) + ((n-2) >> 1);
    return 1LL << 1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll i = 0;
        ll twos = 0;
        ll ones = 0;
        bool threes = false;
        while(i<n){
            ll curr = 0;
            while(i<n && s[i] != '#'){
                curr++;
                i++;
            }
            if(curr == 2) twos++;
            else if(curr == 1) ones++;
            else if(curr > 0)threes = true;
            i++;
        }
        if(threes){
            cout<<2<<"\n";
        } else{
            cout<<(twos << 1) + ones<<"\n";
        }
    }
    return 0;
}