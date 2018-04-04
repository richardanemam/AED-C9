    /**
    * Sstring: http://www.inf.pucrs.br/~pinho/PRGSWB/Apoio/StringStream/StringStream.html
    * Sstring: http://www.cplusplus.com/reference/sstream/stringstream/stringstream/
    * istringstream: http://www.cplusplus.com/reference/sstream/istringstream/istringstream/
    * -----> istringstream pega apenas os valores númricos de uma string
    * compare: http://www.cplusplus.com/reference/string/string/compare/
    * while(true): https://www.ime.usp.br/~reverbel/mac212-02/maillist/msg00009.html
    */
    
    #include <iostream>
    #include <string>
    #include <stack>
    #include <sstream>
    using namespace std;
    
    bool operador(const string &input);
    void operacao(const string &input, stack<unsigned int> &calcRpn);
    
    
    int main(){
        stack<unsigned int> calcRpn;
        string input;
        unsigned int num;
        
        while(true){
                
            cin >> input;
            if(input.compare("#") == 0) break;
            else if(istringstream(input) >> num)
                calcRpn.push(num);
            
            else if(operador(input))
                operacao(input, calcRpn);
            
            else
                cout << "erro" << endl; 
        }
        return 0;
    }
    
    bool operador(const string &input){
        string op[] = {"+", "-", "*", "/"};
        for(int i = 0; i < 4; i++){
            if(input == op[i]){
                return true;
            }
        }
        return false;
    }
    
    void operacao(const string &input, stack<unsigned int> &calcRpn){
        int rVal, lVal, result;
        
        rVal = calcRpn.top();
        calcRpn.pop();
        
        lVal = calcRpn.top();
        calcRpn.pop();
    
        if(input.compare("+") == 0)
            result = lVal + rVal;
        
        else if(input.compare("-") == 0)
            result = lVal - rVal;
        
        else if(input.compare("*") == 0)
            result = lVal * rVal;
        
        else
            result = lVal / rVal;
            
            cout << result << endl;
            calcRpn.push(result);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
