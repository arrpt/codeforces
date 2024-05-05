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

string helper2(int a, int b){
    return to_string(a).append(to_string(b));
}

int helper(unordered_set<ll> validrow, unordered_set<ll> validcol, ll i, ll j, unordered_set<string> &visited){
    if (i != -1 && j != -1){
        validcol.erase(i);
        validrow.erase(i);
        validcol.erase(j);
        validrow.erase(j);
    }

    if (validrow.empty() == true or validcol.empty() == true){
        cout << "hahaha empty nerds" << endl;
        return 1;
    }
    
    visited.insert(helper2(i, j))
    ll sum = 0;
    cout << "DEBUG" << endl;
    for (auto a: validrow){
        for (auto b: validcol){
            cout << a << " " << b << endl;
            //if (visited.find(helper2(a, b)) != visited.end())
                sum += helper(validrow, validcol, a, b, visited);
        }
    }
    return sum;
}
     
void solve(){
    ll n, k;
    cin >> n >> k;
    unordered_set<ll> validrow;
    unordered_set<ll> validcol;
    unordered_set<string> visited;

    for (ll i = 1; i <= n; i++){
        validrow.insert(i);
        validcol.insert(i);
    }

    for (ll i = 0; i < k; i++){
        ll temp1, temp2;
        cin >> temp1 >> temp2;
        validcol.erase(temp1);
        validrow.erase(temp1);
        validcol.erase(temp2);
        validrow.erase(temp2);
        visited.insert(helper2(temp1, temp2));
    }
    ll ans = helper(validrow, validcol, -1, -1, visited);
    cout << ans%MOD << endl;
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