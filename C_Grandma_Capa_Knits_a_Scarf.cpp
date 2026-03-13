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
        string s;
        cin>>s;
        ll ans = LLONG_MAX;

        for(char c='a'; c<= 'z'; c++){
            ll cnt = 0;
            ll left = 0, right = n-1;
            bool flag = true;
            while(left <= right){
                if(s[left] == s[right]){
                    left++;
                    right--;
                    continue;
                }
                if(s[left] == c){
                    cnt++;
                    left++;
                } else if(s[right] == c){
                    cnt++;
                    right--;
                } else{
                    flag = false;
                    break;
                }
            }
            if(!flag) cnt = LLONG_MAX;
            ans = min(ans, cnt);
        }
        if(ans == LLONG_MAX) ans = -1;
        cout<<ans<<endl;
    }
    return 0;
}