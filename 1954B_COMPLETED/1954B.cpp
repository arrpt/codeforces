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
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    for (int i = 1; i < n-1; i++){
        if (arr[i-1] == arr[i+1] && arr[i-1] != arr[i]){
            //right partition
            int j = 0;
            while( j < n - (i + 1) - 1 && arr[i+1+j] == arr[i+1]){
                j++;
            }

            //left partition
            int k = 0;
            while( k < i && arr[i-1-k] == arr[i-1]){
                k++;
            }
            //cout << j+1 << " " << k+1 << endl;
            ans.push_back(j+1);
            ans.push_back(k);
        }
    }
    if (ans.size() == 0){
        cout << "-1" << endl;
    } else {
        cout << *min_element(ans.begin(), ans.end()) << endl;
    }
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