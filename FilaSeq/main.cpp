#include "filaSeq.cpp"
#include "filaSeq.h"

int main(){
    filaSeq<int> teste(10);
    try{
        
        for(int i = 0; i < 10; i++){
            teste.insere(i);
        }
        
       for(int i = 0; i < 10; i++){
            cout << teste.retira() << endl;
            cout << "\n";
        }
    }catch(const char q){
        cerr << q << endl;
    }/*catch(...){
        cerr << "Unexpected error" << endl;
    }*/
    return 0;
}