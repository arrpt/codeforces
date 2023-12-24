#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vector<int> a;
    for (int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end(),greater<int>());
    cin.ignore();
    for (int i = 0; i < q; i++){
        long long sum = 0;
        long long temp2;
        cin >> temp2;
        for (int j = 0; j < n; j++){
            if (a[j] >= temp2){
                sum += 1;
            } else {
                cout << sum << endl;
                break;
            }
        }
        cin.ignore();
    }
    return 0;
}