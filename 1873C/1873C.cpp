#include <bits/stdc++.h>
void fun(){
    int sum = 0;
    for (int i = 0; i < 10; i++){
        char a[10];
        std::cin >> a;
        for (int j = 0; j < 10; j++){
            if (a[j] == 'X'){
                
                std::cout << i << j << std::endl;
            }

        }
    }
    //std::cout << sum << std::endl;
}

int main(){
    int x;
    std::cin >> x;
    for (int i = 0; i<x; i++){
        fun();
    }
}