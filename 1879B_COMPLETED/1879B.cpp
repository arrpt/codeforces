#include <bits/stdc++.h>
using namespace std;
void fun(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    long long sum_row = 0;
    long long sum_col = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int j = 0; j < n; j++){
        cin >> b[j];
    }
    long long min_row = *min_element(a.begin(), a.end());
    for (int k = 0; k < n; k++){
        sum_row += (b[k] + min_row);
    }
    long long min_col = *min_element(b.begin(), b.end());
    for (int l = 0; l < n; l++){
        sum_col += (a[l] + min_col);
    }
    if (sum_col < sum_row){
        cout << sum_col << endl;
    }
    else{
        cout << sum_row << endl;
    }
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