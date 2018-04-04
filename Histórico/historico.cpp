#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    
    unordered_map<string, int>myMap;
    string subject;
    int aux; 
    int v[3];
    
    
    //Aramazenar o tamanho em um vetor de 3
    while(true){
        
        for(int i = 0; i < 3; i++) cin >> v[i];
        if(v[0] == 0 && v[1] == 0 && v[2] == 0) break;    
    
        // Criar um map para cada matéria
        
        for(int i = 0; i < 3; i++){
            aux = v[i];
            for(int j = 0; j < aux; j++){
                cin >> subject;
                if(myMap[subject] == i){
                  ++myMap[subject];
                }
            }
        }
        
        //Verificar quantidade
        
       for(auto i: myMap){
            if(i.second >= 3 ){
                cout << "yes" << endl;
                break;
            }
            else{
                cout << "no" << endl;
                break;
            } 
       }
    }
    return 0;
}
