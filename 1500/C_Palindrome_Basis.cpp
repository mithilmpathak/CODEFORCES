#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll MOD = 1e9 + 7;
ll MAXN = 40000;

bool isPalindrome(int a){
    string s = to_string(a);
    string rs = s;
    reverse(rs.begin(), rs.end());
    return rs == s;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    ll t;
    cin>>t;
    vector<ll> palindromes;
    for(ll i=1; i<=MAXN;i++){
        if(isPalindrome(i)) palindromes.push_back(i);
    }

    vector<ll> dp(MAXN + 1, 0);
    dp[0] = 1;

    for(ll p: palindromes){
        for(ll sum = p; sum<=MAXN;sum++){
            dp[sum] = (dp[sum] + dp[sum - p]) % MOD;
        }
    }
    while(t--){
        ll n;
        cin>>n;
        cout<<dp[n]<<"\n";
    }
    return 0;
}