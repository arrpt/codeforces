#include <bits/stdc++.h>
using namespace std; 
void fun(){
    int k,d,s;
    cin >> k;
    vector<int> ticktock;
    for (int i=0; i<k; i++){
            cin >> d >> s;
            if (s%2==0){
                ticktock.push_back(d+(s/2)-1);
            } else {
                ticktock.push_back(d+floor(s/2));
            }
    }
    int a = *min_element(ticktock.begin(),ticktock.end());
    cout << a;
}

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        fun();
    }
    return 0;
}