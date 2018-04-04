#ifndef __FILA_H__
#define __FILA_H__
#include <iostream>
using namespace std;

//DEFINE A FILA
template <class Tipo>
class celulaFila{
    private:
        //DEFINE A CELULA
        Tipo el;
        celulaFila *prox, *ini, *fim;
        int nelem;
    
    public:
        celulaFila();
        ~celulaFila();
        void insere(Tipo);
        Tipo retira();
        bool vazia();
        int tamanho();
};
#endif
