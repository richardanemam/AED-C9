#include <iostream>
using namespace std;

int main(void){
    int n;
    int aux = 0;
    
    cin >> n;
    while(n != 0 && 1 <= n <= 10000){
        for(int i = 1; i < n; i++){
            if(n % i == 0) aux += i;
        }
        
        if(aux == n) cout <<"sim\n";
        else cout <<"nao\n";
        
        aux = 0;
        cin >> n;
    }
    
    return 0;
}