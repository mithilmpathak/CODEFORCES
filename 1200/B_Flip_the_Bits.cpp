#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        a+= '0';
        b+= '0';
        ll balance = 0;
        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') balance++;
            else balance--;
            if(((a[i] == b[i]) != (a[i+1] == b[i+1])) && balance != 0) {
                possible = false;
                break;
            }
        }
        if(possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}