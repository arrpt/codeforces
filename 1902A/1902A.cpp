#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fun(){
    int t;
    std::cin >> t;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);
    ll count0 = std::count(s.begin(), s.end(), '0');
    ll count1 = std::count(s.begin(), s.end(), '1');
    ll unequal1 = std::count(s.begin(), s.end(), std::string("01"));
    ll unequal2 = std::count(s.begin(), s.end(), std::string("10"));
    ll unequal = unequal1 + unequal2;
    std::cout << unequal << count0 << count1 << '\n';
    if ((count0 + unequal) >= count1){
        std::cout << "YES" << '\n';
        return;
    } else {
        std::cout << "NO" << '\n';
        return;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    while(x--){
        fun();
    }
    return 0;
}