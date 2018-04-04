#ifndef __FILA_H__
#define __FILA_H__
#include <iostream>
using namespace std;

template <class Tipo>
class filaSeq{
    private:
        Tipo *vetor;
        int ini, fim,  nelem, size;
    public:
        filaSeq(int); //recebe size
        filaSeq();
        void insere(Tipo);
        Tipo retira();
        bool cheia();
        bool vazia();
        void setNelem(int);
        void setSize(int);
        void setFim(int);
        void setIni(int);
        int getNelem();
        int getSize();
        int getFim();
        int getIni();
};
#endif