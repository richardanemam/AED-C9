#include <iostream>
#include <stdio.h>
using namespace std;

void multiply44(double A[4][4], double B[4][4], double C[4][4]){
    int count;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            count = 0;
            for(int k = 0; k < 4; k++){
                count = count + A[i][k] * B[k][j];
            }
            C[i][j] = count;
        }       
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << C[i][j] << endl;           
        }      
    }
}

int main(){
    double A[4][4] = {0, 1, 2, 3,
                      3, 2, 1, 0,
                      2, 1, 3, 0,
                      0, 2, 3, 1};
                 
    double B[4][4] = {3, 1, 2, 0,
                      2, 1, 0, 3,
                      1, 0, 3, 1,
                      2, 0, 1, 3};
                 
    double C[4][4];
    
    multiply44(A, B, C);
    
    
    return 0;
}