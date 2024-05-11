#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fun(){
    ll n;
    cin >> n;
    unordered_map<ll, ll> a;
    for (ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        if (a.find(x) == a.end()){
            a[x] = 1;
        } else {
            a[x]++;
        }
    }
    ll ans = 0;
    for (auto i : a){
        if (i.second > 2){
            ans += i.second / 3;
        }
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    while(x--){
        fun();
    }
    return 0;
}