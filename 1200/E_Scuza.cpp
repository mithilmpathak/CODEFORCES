#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, q;
        cin>>n >> q;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<ll>ques(q);
        for(ll i=0; i<q;i++) cin>>ques[i];
        vector<ll> ps(n), ph(n);
        ps[0] = a[0];
        ph[0] = a[0];
        for(ll i= 1;i<n;i++){
            ph[i] = max(a[i], ph[i-1]);
            ps[i] += ps[i-1] + a[i];
        }
        for(ll i=0;i<q;i++){
            ll curr = ques[i];
            ll left = 0, right = n-1;
            ll ans = -1;
            while(left <= right){
                ll mid = left + (right - left)/2;
                if(ph[mid] > curr){
                    right = mid - 1;
                } else{
                    ans = max(ans, mid);
                    left = mid + 1;
                }
            }
            if(ans != -1) cout<<ps[ans]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}