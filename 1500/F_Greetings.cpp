#include<bits/stdc++.h>
using namespace std;

#define ll long long

class SegTree{
    ll n;
    vector<ll> tree;
public:
    SegTree(ll n): n(n), tree(4*n + 5, 0) {}

    void update(ll node, ll l, ll r, ll pos){
        if(l == r){
            tree[node]++;
            return;
        }

        ll mid = l + (r - l) / 2;

        if(pos <= mid){
            update(2*node, l, mid, pos);
        } else{
            update(2* node + 1, mid + 1, r, pos);
        }

        tree[node] = tree[2*node] + tree[2* node + 1];
    }

    ll query(ll node, ll l, ll r, ll ql, ll qr){
        if(qr < l || ql > r) return 0LL;

        if(ql <= l && r<=qr) return tree[node];

        ll mid = l + (r - l)/2;
        return query(2*node, l, mid, ql, qr) + query(2*node + 1, mid + 1, r, ql, qr);
    }

    void update(ll pos){
        update(1, 0, n-1, pos);
    }

    ll query(ll l, ll r){
        if(l > r) return 0;
        return query(1, 0, n-1, l, r);
    }
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> people(n);
        vector<ll> b(n);

        for(ll i=0;i<n;i++){
            cin>>people[i].first>>people[i].second;
            b[i] = people[i].second;
        }

        sort(people.begin(), people.end());

        sort(b.begin(), b.end());

        ll ans = 0;

        SegTree st(n);

        for(ll i=0;i<n;i++){
            ll currB = people[i].second;
            ll pos = lower_bound(b.begin(), b.end(), currB) - b.begin();

            ans += st.query(pos + 1, n-1);

            st.update(pos);
        }

        cout<<ans<<"\n";

        

        
    }
    return 0;
}