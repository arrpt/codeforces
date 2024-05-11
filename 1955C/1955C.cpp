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
    deque<ll> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    while (k and arr.size() > 1){
        ll check = min(arr.front(), arr.back());

        if (k < 2*check){
            arr.front() -= k / 2 + k % 2;
            arr.back() -= k / 2;
            k = 0;
        } 
        else {
            arr.front() -= check;
            arr.back() -= check;
            k -= 2*check;
        }
        if (arr.front() == 0){
            arr.pop_front();
        }
        if (arr.back() == 0){
            arr.pop_back();
        }
    }
    cout << n - arr.size() + (arr.size() and arr.front() <= k) << endl;
    return;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--){
        solve();
    }
}