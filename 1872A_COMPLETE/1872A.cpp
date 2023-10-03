#include <bits/stdc++.h>
void fun(){
    int a,b,c;
    std::cin >> a >> b >> c;
    float d = fabsf((float)a-(((float)a+(float)b)/2));
    std::cout << ceil(d/float(c)) << std::endl;
}
int main(){
    int x;
    std::cin >> x;
    for (int i = 0; i < x; i++){
        fun();
    }
}