#include <bits/stdc++.h>
void fun(){
    int b;
    std::cin >> b;
    std::cin.ignore();
    std::string c;
    std::getline(std::cin, c);
    if (b%2==0){
        std::cout << 2 << std::endl;
        std::cout << 1 << " " << b << std::endl;
        std::cout << 1 << " " << b << std::endl;
    } else {
        std::cout << 4 << std::endl;
        std::cout << 2 << " " << b << std::endl;
        std::cout << 2 << " " << b << std::endl;
        std::cout << 1 << " " << 2 << std::endl;
        std::cout << 1 << " " << 2 << std::endl;
    }
}

int main(){
    int a;
    std::cin >> a;
    for (int i = 0; i<a; i++){
        fun();
    }
    return 0;
}