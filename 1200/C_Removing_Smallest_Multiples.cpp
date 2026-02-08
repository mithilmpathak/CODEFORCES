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
        ll ans = 0;
        vector<bool>visited(n+1, false);
        for(ll i=1;i<=n;i++){
            for(ll j= i;j<=n;j+=i){
                if(s[j-1] == '1') break;
                if(visited[j]) continue;
                else{
                    visited[j] = true;
                    ans += i;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}