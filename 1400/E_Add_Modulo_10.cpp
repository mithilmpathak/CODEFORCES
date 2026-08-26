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
        vector<ll>a(n);
        for(ll i=0;i<n;i++) {
            cin>>a[i];
            if(a[i] & 1){
                a[i] += (a[i] % 10);
            }
        }

        bool allEqual = true;
        for(ll i=1;i<n;i++){
            if(a[i] == a[i-1]) continue;
            allEqual = false;
            break;
        }
        if(allEqual){
            cout<<"yes\n";
            continue;
        }

        bool found10 = false;
        for(ll i=0;i<n;i++){
            if(a[i] % 10 == 0){
                found10 = true;
                break;
            }
        }
        if(found10){
            cout<<"no\n";
            continue;
        }

        for(ll i=0;i<n;i++){
            while(a[i] % 10 != 2){
                a[i] += (a[i] % 10);
            }
            a[i] %= 20;
        }

        allEqual = true;

        for(ll i=1;i<n;i++){
            if(a[i] == a[i-1]) continue;
            allEqual = false;
            break;
        }
        if(allEqual){
            cout<<"yes\n";
        } else{
            cout<<"no\n";
        }
    }
    return 0;
}