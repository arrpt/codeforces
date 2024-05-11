#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fun(){
    int n,k;
    cin >> n >> k;
    vector<int> nums;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    else{
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
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