#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    ll temp = n;
    ll cnt2 = 0, cnt5 = 0;
    while(temp % 2 == 0){
        cnt2++;
        temp /= 2;
    }
    while(temp % 5 == 0){
        cnt5++;
        temp/=5;
    }
    ll k = 1;
    while(cnt2 < cnt5 && k*2 <=m){
        cnt2++;
        k*=2;
    }
    while(cnt5 < cnt2 && k*5 <= m){
        cnt5++;
        k*=5;
    }
    while(k * 10 <= m){
        k*= 10;
    }
    if(k == 1){
        cout<<n*m<<"\n";
    }else{
        k*= (m/k);
        cout<<n*k<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}