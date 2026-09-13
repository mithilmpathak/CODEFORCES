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
        vector<ll> a(n+1);
        for(ll i=1;i<=n;i++){ cin>> a[i];}
        vector<pair<ll,ll>> b;
        for(ll i=1;i<=n;i++){
            if(a[i] != i){
                b.push_back({a[i], i});
            }
        }
        if(b.size() & 1){
            cout<<"NO\n";
            continue;
        }
        ll left = 0, right = (ll)b.size() - 1;
        bool flag = true;
        while(left < right){
            if(b[left].second == b[right].first && b[left].first == b[right].second){
                left++;
                right--;
            } else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
    return 0;
}