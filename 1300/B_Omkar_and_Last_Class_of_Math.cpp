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
        ll found = 0;

        for(ll i=2;i*i<=n;i++){
            if(n % i == 0){
                ll a = n / i;
                found = 1;
                cout<<a<<" "<<n-a<<"\n";
                break;
            }
        }
        if(!found){
            cout<<1<<" "<<n-1<<"\n";
        }
    }

    return 0;
}