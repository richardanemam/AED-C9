#include <iostream>
using namespace std;

int main(void){
    
    unsigned int t, x, y;
    cin >> t >> x >> y; //Entrada
    
    while(t != 0){
        if(t == 1){
            if(x % 2 == 0 && y % 2 == 0) cout << "preto\n";
            else if(x % 2 != 0 && y % 2 != 0) cout << "preto\n";
            else cout << "branco\n";
        }
        else if(t == 2){
            if(x % 2 == 0 && y % 2 == 0) cout << "branco\n";
            else if(x % 2 == 0 && y % 2 == 0) cout << "branco\n";
            else cout << "preto\n";
        }
        else break;
        
        cin >> t;
        if(t == 0) break;
        cin >> x >> y;
    }
    
    return 0;
}