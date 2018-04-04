#include <iostream>
using namespace std;

int main(void){
    int v, n50, n10, n5, n1;
    
    while(cin >> v && v != 0 && 1 <= v <= 10000){
        if(v >= 50){
            n50 = v / 50;
            v = v % 50;
        }
        
        if(v >= 10){
            n10 = v / 10;
            v = v % 10;
            cout << n10;
        }
        
        if(v >= 5){
            n5 = v / 5;
            v = v % 5;
        }
        
        if(v >= 1){
            n1 = v / 1;
        }
        
        cout << n1 << " " << n5 << " " << n10 << " " << n50 << "\n";
    
        n50 = 0; n10 = 0; n5 = 0; n1 = 0;
    }
}
