#include <bits/stdc++.h>
void fun(){
    int b,num;
    std::string input;
    std::cin >> b;
    std::vector<int> list(b);
    std::getline(std::cin, input);
    std::istringstream chr_to_I(input);
    while (chr_to_I >> num){
        list.push_back(num);
    }
    for (int i=0; i < list.size(); i++ ){
        std::cout << list[i] << std::endl;
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