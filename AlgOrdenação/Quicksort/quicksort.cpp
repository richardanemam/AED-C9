#include <iostream>
#include <random>
using namespace std;

int partition(int *v, int start, int end);
void quicksort(int *v,  int start, int end);

int partition(int *v, int start, int end){
    //Algoritmo de partição
    int i = start; int j = end;
    
    //Define o pivo
    int pivo = v[start];
    
    while(true){
        while(j > i && v[j] > pivo) j--;
        if(i == j) break;
        v[i] = v[j]; i++;
        while(i < j && v[i] < pivo) i++;
        if(i == j) break;
        v[j] = v[i]; j--;
    }
    v[i] = pivo;
    return i;
}

void quicksort(int *v,  int start, int end){
    
    //Condição de parada (Caso trivial)
    if(end <= start) return;
    
    //Retorna a posção do pivo quando particionado
    int pos = partition(v, start, end);
    
    //Ordena a parte à direita do vetor, ou seja, os elementos menores do que o pivo
    quicksort(v, start, pos-1);
    
    //Ordena a parte à esquerda do vetor, ou seja, os elementos maiores do que o pivo
    quicksort(v, pos+1, end);
}

int main(){
    
    /*uniform_int_distribution<int32_t> udist;
    mt19937 rg;
    
    int n = 10;
    int *v = new int[n];
    
    rg.seed(170);
    
    for(int i = 0; i < n; i++) v[i] = udist(rg);
    for(int i = 0; i < n; i++) cout << v[i] << endl;
    */
    int v[] = {9, 16, 11, 15, 1, 2, 8, 2, 4, 10, 20, 7, 5, 0};
    for(int i = 0; i < 13; i++) cout << v[i] << endl;
    quicksort(v, 0, 13);
    
    cout << "============== OREDENADO ================" << endl;
    
    for(int i = 0; i < 13; i++) cout << v[i] << endl;
    return 0;
}