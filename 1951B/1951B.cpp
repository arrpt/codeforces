#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define CEIL(m,n) ((m)+(n)-1)/(n)
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>; //find_by_order, order_of_key
typedef priority_queue<int,vector<int>,greater<int>> PQ;
typedef priority_queue<int> MPQ;
const int MOD = 1000000007;
#define heeho(n) ((((n)%MOD)+MOD)%MOD)

int gcd(int a, int b){
    if(b == 0){return a;}
    return gcd(b, a%b);
}
    
void solve(){
    ll n, k;
    cin >> n >> k;
    ll nk = -1;
    vector<ll> a;
    for (ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        a.push_back(temp);
        
    }
    for (ll i = 0; i < n; i++){
        if 
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--){
        solve();
    }
    return 
}