#include "filaEnc.h"
#include <stdio.h>

template <class Tipo>
celulaFila<Tipo>::celulaFila(){
    fim = new celulaFila;
    fim = fim->prox;
    fim->prox = NULL;
    ini = fim;
    nelem = 0;
}

template <class Tipo>
void celulaFila<Tipo>::insere(Tipo el){
    fim->prox = new celulaFila;
    fim = fim->prox;
    fim->el = el;
    fim->prox = NULL;
    nelem++;
}

template <class Tipo>
Tipo celulaFila<Tipo>::retira(){
    if(nelem == 0) throw "FILA VAZIA";
    celulaFila *aux = ini;
    ini = ini->prox;
    delete aux;
    nelem--;
    return(ini->el);
}

template <class Tipo>
bool celulaFila<Tipo>::vazia(){
    return (nelem == 0);
} 

template <class Tipo>
int celulaFila<Tipo>::tamanho(){
    return nelem;
}

template <class Tipo>
celulaFila<Tipo>::~celulaFila(){
    celulaFila *aux;
    while(ini){
        aux = ini;
        ini = ini->prox;
        delete (aux);
    }
}