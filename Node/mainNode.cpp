#include "node.h"
#include "node.cpp"

int main(){
    Node<int> celula;
    try{
        for(int i = 0; i < 5; i++){
                cout << i << "\n";
                celula.push(i);
            }
            
            for(int i = 0; i < 5; i++){
                cout << celula.pop() << endl;
            }
    } catch(const char* e){
        cerr << e << endl;
    } catch (...){
        cerr << "Unexpected Error" << endl;
    }
    return 0;
}