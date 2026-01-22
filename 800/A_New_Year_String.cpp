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
        bool contains26 = false;
        bool notcontain25 = false;
        ll i = 0;
        ll count25 = 0;
        ll count26 = 0;
        ll ans = 0;
        while(i <= n-4){
            if(s.substr(i,4) == "2025"){
                count25++;
                i+=4;
            } else{
                i++;
            }
        }
        ans = count25;
        i = 0;
        string temp = "2026";
        ll tempans = LLONG_MAX;
        while(i <= n - 4){
            string sub = s.substr(i, 4);
            ll diff = 0;
            for(ll j = 0; j<4;j++){
                if(sub[j] != temp[j]) diff++;
            }
            tempans = min(tempans, diff);
            i++;
        }
        ans = min(ans, tempans);
        cout<<ans<<endl;
    }
    

    return 0;
}