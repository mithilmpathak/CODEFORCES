#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll sum = 0;
        for(int i: a) sum += i;
        if(s > sum){
            cout<<-1<<endl;
            continue;
        }
        if(s == sum){
            cout<<0<<endl;
            continue;
        }

        ll left = 0, right = 0;
        ll curr = 0;
        ll ans = LLONG_MAX;

        while(right < n && curr < s){
            curr += a[right];
            right++;
        }

        ans = min(ans, left + n - right);
        while(right < n){
            curr += a[right];
            right++;
            while(curr > s){
                curr -= a[left];
                left++;
            }
            if(curr == s){
                ans = min(ans, left + n - right);
            }
        }
        // if(curr == s) ans = min(ans, n - right + left);
        cout<<ans<<endl;
    }
    return 0;
}