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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> temp;
    for (int i = 0; i < n; i++) cin >> arr[i];
    temp.push_back(arr[n-1]);
    for (int i = n-2; i >= 0; i--){
        if (arr[i] > temp.back()){
            int ones = arr[i] % 10;
            int tens = arr[i] / 10;
            temp.push_back(ones);
            temp.push_back(tens);
        } else temp.push_back(arr[i]);
    }
    if (is_sorted(temp.rbegin(), temp.rend()) == true) cout << "YES" << endl;
    else cout << "NO" << endl;
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