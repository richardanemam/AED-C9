#include<iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    while(n != 0){
        if(n % 2 == 0){
            cout<< "par\n";
        }
        else cout<< "impar\n";
        cin >> n;
    }
    return 0;
}