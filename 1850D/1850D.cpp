#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fun(){
    int n,k;
    cin >> n >> k;
    if (k==1){
        cout << "0" << endl;
        return;
    }
    vector<int> nums;
    int ans;
    for (int i=0; i<k; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end());
    vector<int> temp;
    int before = 0;
    int temp2 = 0;
    for (int l=1; l<nums.size(); l++){
        if (nums[l]-nums[l-1]>1){
            before = l;
        }
        if ()
    }
    if (!temp.empty()) {
    cout << nums.size() - *max_element(temp.begin(), temp.end()) << endl;
    } else {
    cout << nums.size() << endl; // If temp is empty, there are no gaps, so the result is the size of the nums vector.
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