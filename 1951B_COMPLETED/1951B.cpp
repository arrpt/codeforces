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
    k--;
    vector<ll> arr1(n);
    vector<ll> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int firstmax = n;
    for (int i = 0; i < n; i++){
        if (arr[i] > arr[k]){
            firstmax = i;
            break;
        }
    }
    //swap(arr1[0], arr1[k]);
    if (firstmax > k) {
        cout << firstmax - 1 << endl;
        //cout << firstmax << k << endl;
        return;
    }
    int win1 = firstmax-1; // first max > k
    swap(arr[firstmax], arr[k]);
    
    int secondmax = n;
    for (int i = firstmax; i <= k; i++){
        if (arr[i] > arr[firstmax]){
            secondmax = i;
            break;
        }
    }
    int win2;
    if (firstmax - 1 < 0)
        win2 = secondmax - firstmax - 1;
    else
        win2 = secondmax - firstmax;
    //cout << firstmax << secondmax << k << endl;
    //cout << win1 << win2 << endl;
    cout << max(win1, win2) << endl;
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