#include <bits/stdc++.h>
void fun(){
    int n;
    std::cout << "enter n" << std::endl;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i=0; i<n; i++){
        int num;
        std::cin >> num;
        a[i] = num;
    }
    int op = 0;
    while (true){
        std::vector<int> b = a;
        std::sort(b.begin(),b.end());
        std::cout << op << std::endl;
        if (a==b){
            std::cout << op << std::endl;
            return;
        } else {
            for (int j=1; j<n; j++){
                a[j] = std::max(0,a[j]-1);
            }
            op += 1;
        }
    }
    //return;
}
int main(){
    int x;
    std::cin >> x;
    while(x--){
        fun();
    }
    return 0;
}