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
    vector<ll> arr(n);
    vector<pair<ll,ll>> temp(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        temp[i] = {arr[i], i};
    }
    sort(temp.begin(), temp.end());
    ll ans = 0;
    for (int i = 1; i < n; i++){
        if (temp[i].second < temp[i-1].second) ans++;
    }
    cout << ans << endl;
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