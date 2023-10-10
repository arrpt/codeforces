#include <bits/stdc++.h>
void fun(){
    int n;
    std::cin >> n;
    std::vector<int> solve(n);
    for (int i=0; i<n; i++){
        std::cin >> solve[i];
    }
    long sum=0;
    long cnt_1=0;

    for (int j=0; j<n; j++){
        sum += solve[j];
        if (solve[j] == 1){
            cnt_1 += 1;
        }
    }
    
    if(sum >= cnt_1+n && n>1){
        std::cout << "YES" << std::endl;
    } else{
        std::cout << "NO" << std::endl;
    }
    return;
}
int main(){
    int x;
    std::cin >> x;
    while(x--){
        fun();
    }
    return 0;
}