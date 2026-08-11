#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        int tmp[3] = {a,b,c};
        sort(tmp,tmp+3);
        if(a == b || b == c){
            cout<<0<<"\n";
            continue;
        }
        cout<<min(abs(tmp[1]-tmp[0]),abs(tmp[2]-tmp[1]))<<"\n";
    }
    return 0;
}