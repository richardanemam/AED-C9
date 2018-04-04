#include <iostream>
    #include <cstring>
    using namespace std;
    
    bool palindromo(char palavra[], int ini, int fim);
    
    bool palindromo(char palavra[], int ini, int fim){
        if(ini >= fim) return true;
        if(palavra[ini] == palavra[fim])
            palindromo(palavra, ini+1, fim-1);
        else
            return false;
    }
    
    int main(){
        
        char palavra[200];
        int tamanho;
        bool verifica;
        
        cin.getline(palavra, 200);
        
        while(palavra[0] != '#'){
            tamanho = strlen(palavra);
            verifica = palindromo(palavra, 0, tamanho - 1);
        
            if(verifica)
                cout << "sim" << endl;
            else
                cout << "nao" << endl;
        
            cin.getline(palavra, 200);
        }
        return 0;
    }