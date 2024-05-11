#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ld long double
#define CEIL(m,n) ((m)+(n)-1)/(n)
const int MOD = 1000000007;
#define froggy(n) ((((n)%MOD)+MOD)%MOD)

using namespace __gnu_pbds;
using namespace std;
     
template <typename T>
using pbds = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>; //find_by_order, order_of_key

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

     
void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> arr(n+1);
    arr[0] = 0;
    arr[1] = 1;
    for (ll i = 2; i <= n; i++){
        if (i % 15 == 0){
            arr[i] = i / 15;
        }
        ll magic = ceil(static_cast<ld>(i) / 15.0);
        dbg(i, magic);
        if (i >= magic*10){
            arr[i] = i / 10 + arr[i % 10];
        } else if (i >= magic*6){
            arr[i] = i / 6 + arr[i % 6];
        } else if (i >= magic*3){
            arr[i] = i / 3 + arr[i % 3];
        } else if (i >= magic*1){
            arr[i] = i / 1 + arr[i % 1];
        } else {
            cout << "ERROR" << endl;
        }
    }
    cout << arr[n] << endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        //cout << "Case #" << t << ": " << endl;
        solve();
    }
}