    #include "stack.h"
    #include "stack.cpp"
    
    int main(){
        
        Pilha<int> st(5);
        
        try{
        
            for(int i = 0; i < 5; i++){
                cout << i << "\n";
                st.push(i);
            }
            
            for(int i = 0; i < 5; i++){
                cout << st.pop() << endl;
            }
            
        }catch(const char* e){
            cerr << e << endl;
        }catch(...){
            cerr << "Unexpected Error" << endl;   
        }
    }