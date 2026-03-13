#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll cnt = 0;
        for(ll i=0;i<n;i++){
            char c;
            cin>>c;
            if(c=='0') cnt++;
        }
        if(cnt%2==0 || cnt == 1) cout<<"BOB\n";
        else cout<<"ALICE\n";
    }
    return 0;
}