#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,x, m;
        cin>>n>>x>>m;
        ll left = x;
        ll right = x;
        while(m--){
            ll li, ri;
            cin>>li>>ri;
            if((right >= li && right <= ri) || (left >= li && left <= ri)){
                left = min(left, li);
                right = max(right, ri);
            }
        }
        cout<<right - left + 1<<"\n";
    }
    return 0;
}