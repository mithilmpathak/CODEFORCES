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
        
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<ll> b = a;
        sort(b.begin(), b.end());
        // bool isSorted = true;
        // for(ll i=0; i< n-1;i++){
        //     if(a[i+1] < a[i]) isSorted = false;
        // }
        if(b == a){
            cout<<-1<<endl;
            continue;
        }
        ll mini = b[0], maxi = b[n-1], ans = LLONG_MAX;

        for(ll i=0;i<n;i++){
            if(a[i] != b[i]){
                ll curr = max(a[i] - mini, maxi - a[i]);
                ans = min(ans, curr);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}