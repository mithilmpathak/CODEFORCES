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
        vector<ll> a(n);
        ll cnt = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 0) cnt++;
        }
        if(cnt == n){
            cout<<0<<endl;
            continue;
        }
        if(cnt == 0){
            cout<<1<<endl;
            continue;
        }
        bool zeros = false;
        ll left = 0, right = n-1;
        while(a[left] == 0){
            left++;
        }
        while(a[right] == 0) right--;
        for(ll i = left; i<=right; i++){
            if(a[i] == 0) zeros = true;
        }
        if(zeros == false){
            cout<<1<<endl;
        } else{
            cout<<2<<endl;
        }
    }
    return 0;
}