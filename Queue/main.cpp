#include "filaEnc.h"
//#include "filaEnc.cpp"

int main(){
    
    celulaFila<int> teste;
    
    try{
        for(int i = 0; i < 20; i = i + 4){
            teste.insere(i);
        }
        
        for(int i = 0; i < 20; i = i + 4){
            cout << teste.retira() << endl;
            cout << "\n";
        }
            
    }catch(const char *q){
        cerr << q << endl;
    }catch(...){
        cerr << "Unexpected error" << endl;
    }
    
    return 0;
}