#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,s,e,polycarp_s, polycarp_e;
    cin >> a;
    for (int i=0; i<a; i++){
        cin >> s >> e;
        if (i==0){
            polycarp_s = s;
            polycarp_e = e;
        }
        else if (s >= polycarp_s && e >= polycarp_e){
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << polycarp_s << endl;
    return 0;
}