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
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll mini = 1, maxi = n;
        ll left = 0, right = n-1;
        bool found = false;
        while(left < right){
            if(a[left] != mini && a[left] != maxi && a[right] != mini && a[right]!= maxi){
                found = true;
                cout<<left + 1<<" "<<right + 1<<endl;
                break;
            } else if(a[left] == mini){
                mini++;
                left++;
            } else if(a[left] == maxi){
                maxi--;
                left++;
            } else if(a[right] == mini){
                mini++;
                right--;
            } else if(a[right] == maxi){
                maxi--;
                right--;
            }
        }
        if(!found){
            cout<<-1<<endl;
        }
    }
    return 0;
}