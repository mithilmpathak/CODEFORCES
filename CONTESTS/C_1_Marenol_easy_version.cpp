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
        string a,b;
        cin>>a>>b;

        ll oddOnes = 0, evenOnes = 0;
        for(ll i=0;i<n;i++){
            if(i & 1){
                if(a[i] == '1') oddOnes++;
                if(b[i] == '1') oddOnes--;
            }
            else{
                if(a[i] == '1') evenOnes++;
                if(b[i] == '1') evenOnes--;
            }
        }
        if(oddOnes == 0 && evenOnes == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}