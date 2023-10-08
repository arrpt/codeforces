#include <bits/stdc++.h>
int fun(int a){
    int sum = 0;
    int num = 1;
    for (int i=1; i<a; i++){
        sum += num;
        num += 1;
    }
    return sum;
}

int main(){
    int k;
    std::cin >> k;
    while(k--){
        int x,y,n;
        std::cin >> x >> y >> n;
        int sum = 0;
        int num = 1;
        for (int i=1; i<n; i++){
            sum += num;
            num += 1;
        }
        if ((y-sum)>=x){
            std::cout << x << " ";
            for (int j=1; j<(n-1); j++){
                std::cout << y-fun(n-j) << " ";
            }
            std::cout << y << std::endl;
        }
        else {
            std::cout << "-1" << std::endl;
        }
    }
}