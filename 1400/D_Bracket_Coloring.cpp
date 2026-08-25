#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n & 1){
            cout<<"-1\n";
            continue;
        }
        vector<ll> balance(n);
        balance[0] = (s[0] == '(' ? 1 : -1);

        for(ll i=1;i<n;i++){
            balance[i] = balance[i-1] + (s[i] == '(' ? 1 : -1);
        }

        if(balance[n-1] != 0){
            cout<<"-1\n";
            continue;
        }

        if(*min_element(balance.begin(), balance.end()) == 0 || *max_element(balance.begin(), balance.end()) == 0){
            cout<<"1\n";
            for(ll i=0;i<n;i++){
                cout<<"1 ";
            }
            cout<<"\n";
        } else{
            vector<ll> ans(n);
            for(ll i=0;i<n;i++){
                if(balance[i] > 0) ans[i] = 1;
                else if(balance[i] < 0) ans[i] = 2;
                else ans[i] = ans[i-1];
            }
            cout<<"2\n";
            for(ll i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        
    }
    return 0;
}