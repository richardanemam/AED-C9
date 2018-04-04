/*
* Algoritmo para verificar se um vetor está ordenado
*/

#include <iostream>
using namespace std;

int main(){
    int n, aux;
    bool verfifica;
    
    while(true){
        verfifica = true;
        cin >> n;
        if(n == 0) break;
        
        int v[n];
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
        aux = v[0];
        
        for(int i = 1; i < n; i++){
            if(aux > v[i]){
                verfifica = false;
                break;
            } else {
                aux = v[i];
            }  
        }
        
        if(verfifica) cout << "sim" << endl;
        else cout << "nao" << endl;
    }
        
    return 0;    
}