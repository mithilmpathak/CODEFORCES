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
        vector<ll>ans(n);
        vector<bool>visited(n+1, false);
        // ans[0] = 1; visited[1] = true;
        // ans[1] = n; visited [n] = true;
        ans[n-1] = n;
        visited[n] = true;
        for(ll i=n-2;i>=0;i--){
            ll diff = i+1;
            ll add = ans[i+1] + diff;
            ll sub = ans[i+1] - diff;
            if(sub >=1 && visited[sub] == false){
                ans[i] = sub;
                visited[sub] = true;
            } else{
                ans[i] = add;
                visited[add] = true;
            }
        }
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}