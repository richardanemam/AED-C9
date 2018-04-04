#include <iostream>
#include <random>
using namespace std;

void bSort(int *v, int n){
    int aux;
    for(int j = n-1; j > 0; j--){
        for(int i = 0; i < j; i++){
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
        }
    }
}


int main(){
    
    uniform_int_distribution<int32_t> uidist;
    mt19937 rng;
    
    int n = 10;
    int *v = new int[n];
    
    rng.seed(127);
    
    for(int i = 0; i < n; i++)
        v[i] = uidist(rng);
    
    bSort(v, n);
    
    for(int i = 0; i < n; i++)
        cout<< "v["<< i <<"]: " << v[i] << endl; 
    
    //delete v;
    return 0;
}