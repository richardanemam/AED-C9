//http://www.cplusplus.com/articles/NhA0RXSz/ (Beginners guide to the std::sort() function)

  #include "ordenacao.h"
  #include <iostream>
  #include <cstdlib>
  #include <time.h>
  #include <random>
  #include <algorithm>
  using namespace std;
  
  //Cabeçalhos
  void heapS(int *v, int n);
  void quickS(int *v, int n);
  int cmpfunc(const void *a, const void *b);
  void sort(int *v, int n);
  
  //HeapS
  void heapS(int *v, int n){
    int start;
    int tmili;
    
    start = clock();
      
    ED::Ordenacao<int>::heapsort(v, n);
      
    tmili = (int)((clock()-start)*1000/CLOCKS_PER_SEC);
      
    cout << tmili <<" milisegundo(os)"<< endl;
    cout << "\n";
  }
  
  
  //QuickS
  void quickS(int *v, int n){
    int start;
    int tmili;
    
    start = clock();
      
    qsort(v, n, sizeof(int), cmpfunc);
      
    tmili = (int)((clock()-start)*1000/CLOCKS_PER_SEC);
      
    cout << tmili <<" milisegundo(os)"<< endl;  
    cout << "\n";
  }
  
  //Sort
  void sort(int *v, int n){
    int start;
    int tmili;
    
    start = clock();
      
    sort(v, v + n);      
    
    tmili = (int)((clock()-start)*1000/CLOCKS_PER_SEC);
      
    cout << tmili <<" milisegundo(os)"<< endl;
    cout << "\n";
  }
  
  //Metodo de comparção
  int cmpfunc(const void *a, const void *b){
    return (*(int*) a - *(int*)b);
  }
  
  int main(int argc, char** argv) {
      
    uniform_int_distribution<int32_t> uidist;
    mt19937 rng; // Pseudo random number generator
    
    int size[] = {10000, 30000, 90000,
                  270000, 810000, 2430000,
                  7290000, 21870000, 65610000};
    
    int grain[] = {4, 81, 151, 1601, 2307, 4207};
    
    int *v = new int[65610000];
    if(v == NULL) return 0;
    
    cout << "==== Heap Sort ====" << endl;
    for(int i = 0; i < 6; i++){
      rng.seed(grain[i]);
      for(int j = 0; j < 9; j++){
            
        for(int k = 0; k < size[j]; k++){
          v[k] = uidist(rng);
        }
        cout << "Tamanho: " << size[j] << " e semente: " << grain[i] << endl;
        heapS(v, size[j]); //Chamado 9x, pois há 9 tamanhos diferentes
      }
    }
    cout << "==== Heap Sort ====" << endl;
    cout << "\n";
    
    cout << "==== Quick Sort ====" << endl;
    for(int i = 0; i < 6; i++){
      rng.seed(grain[i]);
      for(int j = 0; j < 9; j++){
        
        for(int k = 0; k < size[j]; k++){
          v[k] = uidist(rng);
        }
        cout << "Tamanho: " << size[j] << " e semente: " << grain[i] << endl;
        quickS(v, size[j]); //Chamado 9x, pois há 9 tamanhos diferentes
        
      }
    }
    cout << "==== Quick Sort ====" << endl;
    cout << "\n";
    
    cout << "==== Sort ====" << endl;
    for(int i = 0; i < 6; i++){
      rng.seed(grain[i]);
      for(int j = 0; j < 9; j++){
        
        for(int k = 0; k < size[j]; k++){
          v[k] = uidist(rng);
        }
        cout << "Tamanho: " << size[j] << " e semente: " << grain[i] << endl;
        sort(v, size[j]); //Chamado 9x, pois há 9 tamanhos diferentes
        
      }
    }
    cout << "==== Sort ====" << endl;
    cout << "\n";
    
    delete v;
    return 0;
  }