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
     
int helper(int a){
    if (a == 1 or a == 0){
        return 1;
    }
    return helper(a-1) + 2*(a-1)*helper(a-2);

}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll used = 0;
    for (ll i = 0; i < k; i++){
        ll temp1, temp2;
        cin >> temp1 >> temp2;
        if (temp1 == temp2){
            used += 1;
        } else {
            used += 2;
        }
    }
    int sum = 0;
    ll* arr = new ll[n - used + 1];
    //vector<ll> arr(n - used + 1);
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < n - used + 1; i++){
        arr[i] = (arr[i-1] + 2*(i-1)*arr[i-2] % MOD) % MOD ;
    }
    cout << arr[n - used] << endl;
    //cout << helper(n - used) << endl;

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