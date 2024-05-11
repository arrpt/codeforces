#include <bits/stdc++.h>
int main(){
    int x;
    std::cin >> x;
    while(x--){
        int oddCnt = 0;
        int n;
        std::cin >> n;
        for (int i=0; i<n; i++){
            int a;
            std::cin >> a;
            if (a%2!=0){
                oddCnt+=1;        
            }
        }
        if (oddCnt%2==0){
            std::cout << "YES" << std::endl;
        } else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}