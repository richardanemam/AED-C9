//http://www.inf.pucrs.br/~flash/lapro2ec/aulas/aula_strings.html
//http://www.cplusplus.com/reference/string/string/find/

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string frase, sequencia;
    int tamanho, quantidade;
    
    while (true){
        
        size_t j = 0;
        quantidade = 0;
        
        getline(cin, frase);
        if(frase.compare("#") == 0) break;
        
        getline(cin, sequencia);
        tamanho = sequencia.size();
        
        if(tamanho < 4) break;
        
        while(true){
            size_t tam = sequencia.find(frase, j);
            if(tam != string::npos){
                quantidade++;
                j = tam + 1;
            }else{
                break;
            }
        }        
        cout << quantidade << endl; 
    }
    return 0;
}