#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
    
    string express;
    stack<char> pilha;
    char check;
    
    
    getline(cin, express);
    while(express != "#"){
        bool verif = true;
        
        for(int i = 0; i < express.length(); i++){
            if(express[i] == '('||
               express[i] == '['||
               express[i] == '{'){
                    pilha.push(express[i]);
            }
            else if(express[i] == ')'||
                    express[i] == '}'||
                    express[i] == ']'){
                        
                        if(!pilha.empty()){
                            check = pilha.top();
                            pilha.pop();
                            if(express[i] == ')' && check != '(' ||
                               express[i] == ']' && check != '[' ||
                               express[i] == '}' && check != '{'){
                                verif = false;
                                break;
                                
                            }
                        }
                        else{
                            verif = false;
                            break;
                        }
                    }
        }
        
        if(!pilha.empty()){
            verif = false;
        }
        
        if(verif){
            cout << "sim" << "\n";
        }
        else{
         cout << "nao" << "\n";   
        }
        getline(cin, express); 
        while(!pilha.empty()){
            pilha.pop();
        }
    }
    return 0;
}
