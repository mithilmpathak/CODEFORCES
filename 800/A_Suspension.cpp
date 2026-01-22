#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>> t;
    while(t--){
        ll n,y, r;
        cin>>n;
        cin>>y>>r;
        if(r >= n){
            cout<<n<<endl;
        } else{
            ll tmp = y/2;
            if(tmp + r >= n){
                cout<<n<<endl;
            } else{
                cout<<tmp+r<<endl;
            }
        }
    }
    return 0;
}