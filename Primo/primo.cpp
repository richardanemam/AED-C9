#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(void){
    long int n;
    bool check;
    int r;
    
    while(cin >> n && n != 0){
        check = true;
        r = sqrt(n);
        
        if(n == 1 || n == 2 || n == 3){
            check = true;
        }
        else if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0){
            check = false;
        }
        else{
            int k, j;
            for(int i = 1; ; i++){
                k = i*6-1; j = i*6+1;
                if(k >= r || j >= r) break;
                if(n % k == 0 || n % j == 0){
                    check = false;
                    break;
                }      
            }
        }
            
        if(check){
            cout << "sim\n";    
        }
        else{
            cout << "nao\n";
        }
    }
    return 0;
}