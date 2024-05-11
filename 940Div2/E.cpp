#include <bits/stdc++.h>
#define ll long long
#define str std::string;
using namespace std;
long long printNcR(int n, int r){
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
 
    else
        p = 1;
    return p;
}
void fun(){
    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            ll temp = printNcR(i, j) % j;
            ll temp2 = temp % 1000000007;
            ans = ans + temp2;
        }
    }
    cout << ans % 1000000007 << endl;
    return;
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