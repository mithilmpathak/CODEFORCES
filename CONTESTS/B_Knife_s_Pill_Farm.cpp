#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        if(m == 1){
            cout<<*max_element(a.begin(), a.end())<<"\n";
            continue;
        }
        priority_queue<ll> pq;

        ll left = 0, right = m * a[m-1];
        for(ll i=0;i<m-1;i++){
            left += a[i];
            pq.push(a[i]);
        }
        ll ans = right - left;
        int i = m;
        while(i < n){
            right = m * a[i];
            if(a[i-1] < pq.top()){
                left -= pq.top();
                pq.pop();
                left += a[i-1];
                pq.push(a[i-1]);
            }
            ans = max(ans, right - left);
            i++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}