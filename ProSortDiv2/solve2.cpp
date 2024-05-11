#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    bool check = false;
    if (x < 13){
        cout << "NO" << endl;
    } else {
        int max = ceil(sqrt(x-5));
        for (int i = 1; i < max+1; i++){
            for (int j = i+1; j < max+1; j++){
                for (int k = j+1; k < max+1; k++){
                    if (((i*i)+(j*j)+(k*k)) == x){
                        check = true;
                    }
                }
            }
        }
        if (check == true){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}