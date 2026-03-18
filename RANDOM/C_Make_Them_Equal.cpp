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
        char c;
        cin>>c;

        string s;
        cin>>s;

        bool flag = true;
        for(ll i=0;i<n;i++){
            if(s[i] != c){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<0<<endl;
            continue;
        }
        ll val = -1;
        for(ll i=0;i<n;i++){
            int x = i + 1;
            bool check = true;
            for(ll j=x;j<=n;j+=x){
                if(s[j-1] != c){
                    check = false;
                    break;
                }
            }
            if(check){
                val = i + 1;
                break;
            }
        }
        if(val != -1){
            cout<<1<<endl;
            cout<<val<<endl;
            continue;
        }
        cout<<2<<endl;
        cout<<n-1<< " "<<n<<endl;
    }
    return 0;
}