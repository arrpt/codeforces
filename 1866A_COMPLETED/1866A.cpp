#include <bits/stdc++.h>
int main(){
    int x;
    std::cin >> x;
    std::cin.ignore();
    std::vector<int> a;
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    int num;
    while (iss >> num){
        a.push_back(abs(num));
    }
    std::cout << *min_element(a.begin(),a.end()) << std::endl;
    return 0;
}