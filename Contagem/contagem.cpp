#include <iostream>
#include <stdio.h>
#include <stdlib.h>
# define min 301

using namespace std;

int main(){
    int n, x;
    int count[min];
    
   
    while(cin >> n && n != 0 && 2 <= n <= 10000){
        
        for(int i = 0; i < min; i++){
            count[i] = 0;
        }
        
        for(int i = 0; i < n; i++){
            cin >> x;
            count[x]++;
        }
        
        for(int i = 0; i < min; i++){
            cout << count[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}