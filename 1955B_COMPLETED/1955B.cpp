#include <bits/stdc++.h>
using namespace std;

void fun(){
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> arr(n*n);
    for (int i = 0; i < n*n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int a_1_1 = arr[0];
    vector<int> temp(n*n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int a_i_j = a_1_1 + d*j + c*i;
            temp[(n*i) + j] = a_i_j;
        }
    }
    sort(temp.begin(), temp.end());
    if (arr == temp) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        fun();
    }
    return 0;
}