#include <iostream>
using namespace std;

int main(){
    
    //Criar a matriz
    int v[1000][1200];
    int enter, l, c, sum, top, side;
    
    //Coloca uma linha e uma coluna a mais e zera tudo!
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1200; j++){
            v[i][j] = 0;            
        }
    }
    
    //Entreda de valores
    for(int i = 0; i < 9; i++){
        for(int j = 0; j <7; j++){
            cin >> enter;
            if(0 <= enter && enter <= 299) v[i][j] = enter;
            else return 0;
        }
    }
    
    while(true){
        cin >> l >> c;
        if(l == -1 && c == -1) break;
        
        if(l - 2 >= 0 && c - 2 >= 0){
            side = l-2;
            top = c-2;
        }
        else if(l-1 == 0){
            if(c-2 >= 0){
                side = l-1;
                top = c-2;
            }
            else if(c-1 == 0){
                side = l-1;
                top = c-2;
            }
            else{
                side = l-1;
                top = c;
            }
        }
        else{
            if(c-2 >= 0){
                side = l;
                top = c-2;
            }
            else if(c-1 == 0){
                side = l;
                top = c-2;
            }
            else{
                side = l;
                top = c;
            }
        }
        sum = 0;
        
        for(int m = side; m < side+4; m++){
            for(int n = top; n < top+5; n++){
                sum = sum + v[m][n];
            }
        }
        cout << sum << endl;
        
    }
    
    return 0;
}


//Definir as bordas
    /*while(true){
        cin >> l >> c;
        if(l == -1 && c == -1) break;
        
        if((l - 2) >= 0 && (c-2) >= 0){
            sum = sum + v[l-2][c-2];
        }
        else if((l - 1) == 0){
            if((c-2) >= 0)
                sum = sum + v[l-1][c-2];
            else
                if((c-1) == 0))
                    sum = sum + v[l-1][c-1];
                else
                    sum = sum + v[l-1][c];
        }
        else if((c - 1) == 0){
            if(l-2 >= 0)
                sum = sum + v[l-2][c-1];
                else
        }
    }/*
    
    
    //Definir os vizinhos e somar (Os casos de teste são sobre a mesma matriz)
    /*while(true){
        cin >> i >> j;
        if(i == -1 && j == -1) break;
        
        sum = 0;
        
        for(int m = i-1; m < i+4; m++){
            for(int n = j-1; n <= j+3; n++){
                sum = sum + v[m][n];
            }
        }
        cout << sum << endl;
    }*/
    