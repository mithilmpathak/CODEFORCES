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
        if(n % 3 == 1 || n % 3 == 2){
            cout<<"First\n";
        } else{
            cout<<"Second\n";
        }
    }
    return 0;
}