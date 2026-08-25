#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll INF = (1LL << 60) - 1;

class SegTree{
    ll n;
    vector<ll> a;
public:
    SegTree(ll n){
        this->n = n;
        this->a.resize(4*n + 5,0);
    }

    void build(vector<ll>& a, ll i, ll l ,ll r){
        if(l == r){
            this->a[i] = a[l];
            return;
        }
        ll mid = l + (r - l)/ 2;
        build(a, 2*i, l, mid);
        build(a, 2*i + 1, mid + 1, r);
        this->a[i] = this->a[2*i] & this->a[2*i + 1];
    }

    ll query(ll i, ll tl, ll tr, ll l , ll r){
        if (l > r) return INF;
        if(tl == l && tr == r) return this->a[i];

        ll mid = tl + (tr - tl)/2;

        ll left = query(2*i, tl, mid, l, min(r, mid));
        ll right = query(2*i + 1, mid + 1, tr, max(l, mid + 1), r);

        return left & right;
    }
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        SegTree st(n);
        st.build(a, 1, 0, n - 1);
        ll q;
        cin>>q;

        while(q--){
            ll l, k;
            cin>>l>>k;
            l--;
            ll left = l, right = n - 1;
            ll ans = -1;
            while(left <= right){
                ll mid = left + (right - left)/2;
                if(st.query(1, 0, n-1, l, mid) >= k){
                    ans = max(ans, mid);
                    left = mid + 1;
                } else{
                    right = mid - 1;
                }
            }
            if(ans != -1){
                ans++;
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    return 0;
}