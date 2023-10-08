#include <bits/stdc++.h>
void fun(){
    bool isV = false;
    bool isI = false;
    bool isK = false;
    bool isA = false;
    int n,m;
    std::cin >> n >> m;
    std::cin.ignore();
    std::vector<std::vector<char>> mat(n, std::vector<char>(m));
    for (int i=0; i < n; i++){
        std::string input;
        std::getline(std::cin, input);
        for (int j=0; j < input.length(); j++){
            mat[i][j] = input[j];
        }
    }
    for (int k = 0; k < m; k++) {
        std::vector<char> test;
        for (int l = 0; l < n; l++) {
            test.push_back(mat[l][k]);
        }
        if (!isV && (std::find(test.begin(), test.end(), 'v') != test.end())== true){
            isV = true;
        } else if (isV && !isI && (std::find(test.begin(), test.end(), 'i') != test.end())== true){
            isI = true;
        } else if (isI && !isK && (std::find(test.begin(), test.end(), 'k') != test.end())== true){
            isK = true;
        } else if (isK && !isA && (std::find(test.begin(), test.end(), 'a') != test.end())== true){
            isA = true;
        }
    }
    if (isV && isI && isK && isA == true){
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}
int main(){
    int x;
    std::cin >> x;
    while(x--){
        fun();
    }
}