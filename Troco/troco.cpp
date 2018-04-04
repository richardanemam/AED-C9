#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

bool notas(int *p){
    for(int i = 1; i < 8; i++){
        scanf("%d", &p[i]);
        if(p[i] < 0 && p[i] > 20){
            return false;
        }
    }
    return true;
}

int soma(int *p){
    int total = p[1] + 2*p[2] + 5*p[3] + 10*p[4] + 20*p[5] + 50*p[6] + 100*p[7];
    return total;
}

int main(){
    enum{T, n1, n2, n5, n10, n20, n50, n100};
    int *p = (int*)malloc(8*sizeof(int));
    int total, valor;
    bool check;
    
    while(cin >> p[T] && p[T] != 0 && notas(p)){
        check = false;
        total = soma(p);
        if(p[T] > total){
            goto label;
        }
        else{
           for(int i = 0; i <= p[n100]; i++){
                for(int j = 0; j <= p[n50]; j++){
                    for(int k = 0; k <= p[n20]; k++){
                        for(int l = 0; l <= p[n10]; l++){
                            for(int m = 0; m <= p[n5]; m++){
                                for(int n = 0; n <= p[n2]; n++){
                                    for(int q = 0; q <= p[n1]; q++){
                                        valor = q*1 + n*2 + m*5 + l*10 + k*20 + j*50 + i*100;
                                        if(valor == p[T]){
                                            check = true;
                                            goto label;
                                        }
                                    }    
                                }
                            }
                        }
                    }
                }   
            }
        }
        label:
        
        if(check){
            cout << "sim" << endl;
        }else{
            cout << "nao" << endl;
        }    
    }
    
    free(p);
    return 0;
}
