#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll> prefOdd(n, 0), prefEven(n,0);
        prefEven[0] = a[0];
        bool flag = false;
        map<ll,ll> mp;
        mp[prefEven[0] - prefOdd[0]]++;
        for(ll i=1;i<n;i++){
            prefOdd[i] = prefOdd[i-1];
            prefEven[i] = prefEven[i-1];

            if(i&1){
                prefOdd[i] += a[i];
            } else{
                prefEven[i] += a[i];
            }
            ll tmp = prefEven[i] - prefOdd[i];
            mp[tmp]++;
            if(mp[tmp] == 2 || tmp == 0){
                flag = true;
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