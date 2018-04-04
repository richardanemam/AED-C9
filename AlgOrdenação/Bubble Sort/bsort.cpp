#include <iostream>
#include <random>
using namespace std;

void bubble(int *v, int n){
    //Oredenar o vetor
    int troca;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[j] > v[j+1]){
                troca = v[j+1];
                v[j+1] = v[j];
                v[j] = troca;
            }
        }
    }
}

int main(){
    
    //Criar uma vetor com números pseudo-aleatórios
    uniform_int_distribution<int32_t> dist; //distribuição aleatória
    mt19937 rdg; // cria números pseudo-aleatórios (rdg = random generator)
    
    //Vetor alocado na heap
    int n = 10;
    int *v = new int[n];
    
    rdg.seed(234); // Semente 234
    
    //Inicia o vetor com os elementos aletórios
    for(int i = 0; i < n; i++) v[i] = dist(rdg);
    
    //Mostrar o vetor inicial
    for(int i = 0; i < n; i++) cout << v[i] << endl;
    
    //passar esse vetor para o método de ordenação bubble sort
    bubble(v, n);
    
    //Mostrar o vetor ordenado
    cout<< "============== OREDENADO ================" << endl;
    for(int i = 0; i < n; i++) cout << v[i] << endl;
    
    //delete v;
    
    return 0;
}