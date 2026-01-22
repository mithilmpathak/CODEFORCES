#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a == b && b== c && b==d){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}