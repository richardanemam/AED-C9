/*
* http://www.cplusplus.com/reference/utility/pair/
* http://www.cplusplus.com/reference/unordered_map/unordered_map/
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
          
          string palavra;
          int size;         
          unordered_map<string, int>  myMap;        

          
          /* Faz a contagem das palavras.
          Ideia: o indice do "vetor" é uma palavra chave,
          e então para cada palavra chave aramazenamos um dado 
          */
          
          while(cin >> palavra){        
                    
                    size = palavra.size();
                    if(size > 4) ++myMap[palavra];
          }
          
          int tamanho = myMap.size();
          pair<string, int> *v = new pair<string, int>[tamanho];
          int aux = 0;
          
          
          for(auto i: myMap){
                    //cout << "TESTE: "<< i.first << endl;
                    v[aux++] = i;
          }
          
          sort(v, v+tamanho, [](const pair<string, int> &a, const pair<string, int> &b){
                    
                    if(a.second != b.second) return a.second > b.second;
                    else return a.first < b.first;
                    //Possivelmente, a ordem lexicográfica é baseada na tabela ASCII                     
                    
          });
          
          for(int i = 0; i < 10 && i < tamanho; i++)
                    cout << v[i].first << "  " << v[i].second << endl;
          
          delete [] v; //(How to delete it ?)
          return 0;
}