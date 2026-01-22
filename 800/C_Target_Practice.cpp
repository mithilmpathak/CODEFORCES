#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int board[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        char a[10][10];
        ll ans = 0;
        for(ll i=0;i<10;i++){
            for(ll j=0;j<10;j++){
                cin>>a[i][j];
                if(a[i][j] == 'X'){
                    ans += board[i][j];
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}