#include <iostream>
#include <random>
using namespace std;

void select (int *v, int size);

void select (int *v, int size){
    //Select sort implmentation
    int lesser; int swap;
    for(int i = 0; i < size; i++){
        lesser = i;
        for(int j = i+1; j < size; j++)
            if(v[lesser] > v[j]) lesser = j;
            
        swap = v[i];
        v[i] = v[lesser];
        v[lesser] = swap;
    }
}

int main(){
    
    uniform_int_distribution<int32_t> udist;
    mt19937 rg;
    
    int n = 10;
    int *v = new int[n];
    
    rg.seed(678);
    
    for(int i = 0; i < n; i++) v[i] = udist(rg);
    for(int i = 0; i < n; i++) cout << v[i] << endl;
    
    select(v, n);
    
    cout << "========== OREDENADO ===========" << endl;
    for(int i = 0; i < n; i++) cout << v[i] << endl;
    
    return 0;
}
