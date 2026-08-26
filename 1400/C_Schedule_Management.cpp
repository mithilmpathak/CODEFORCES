#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool solve(ll time, vector<ll>& workers, ll n, ll m){
    ll completed = 0;
    for(ll i=1;i<=n;i++){
        if(workers[i] <= time){
            completed += workers[i] + (time - workers[i]) / 2;
        } else{
            completed += time;
        }
    }
    return completed >= m;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>a(m);
        vector<ll> workers(n+1,0);
        for(ll i=0;i<m;i++){
            cin>>a[i];
            workers[a[i]]++;
        }

        ll left = 0, right = 2*m;
        ll ans = LLONG_MIN;
        while(left <= right){
            ll mid = left + (right - left) / 2;

            if(solve(mid, workers, n, m)){
                ans = mid;
                right = mid -1;
            } else{
                left = mid + 1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}