/**
 
 * Um vetor na stack é um ponteiro, logo p é um ponteiro
 * Sort function: http://www.cplusplus.com/reference/algorithm/sort/
 * Lambda function: http://www.cprogramming.com/c++11/c++11-lambda-closures.html
 * auto specifier: para variáveis, funções e templates sem tipo específico (http://en.cppreference.com/w/cpp/language/auto)
 
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class pessoa{
  public:
    string nome;
    int x;
};

int main(){
    pessoa p[50];
    int n;
    
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        //Dados pessoais
        for(int i = 0; i < n; i++)
            cin >> p[i].nome >> p[i].x;
        
        auto f  = [](const pessoa &a, const pessoa &b){
                        /*if(a.x != b.x) return a.x < b.x; 
                        else a.nome < b.nome;*/
                        return a.x != b.x? a.x < b.x : a.nome < b.nome;
                    };
        
        sort(p, p+n, f);
                    
        //cout << endl;
        for(int i = 0; i < n; i++)
            cout << p[i].nome << " " << p[i].x << endl;
            //cout << endl;  
    }
    return 0;
}