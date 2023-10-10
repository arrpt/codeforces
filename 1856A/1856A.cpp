#include <bits/stdc++.h>
int fun(){
    int n;
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
        if (a==b){
            return op;
        } else {
            for (int j=0; j<n; j++){
                a[j] = std::max(0,a[j]-1);
            }
            op += 1;
        }
    }
    return -1;
}
int main(){
    int x;
    std::cin >> x;
    while(x--){
        int res = fun();
        std::cout << res << std::endl;
    }
    return 0;
}