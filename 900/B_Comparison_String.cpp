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
        ll curr = 1;
        ll longest = 1;
        
        for(ll i=0;i<n;i++){
            if(s[i] == s[i-1]){
                curr++;
            }
            else{
                longest = max(curr, longest);
                curr = 1;
            }
        }
        longest = max(longest, curr) + 1;
        cout<<longest <<endl;
    }
    return 0;
}