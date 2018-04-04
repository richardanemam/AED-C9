#include <iostream>
using namespace std;

int main(void){
    
    int n, aux;
    cin >> n;
    while(n != 0 && 1 <= n <= 300){
        aux = n*n;
        cout << aux << "\n";
        cin >> n;
    }
}