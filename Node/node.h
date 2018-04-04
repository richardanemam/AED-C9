#ifndef __Node_H__
#define __Node_H__
#include <iostream>
using namespace std;

template <class Tipo>
class Node {
    private:
        Tipo item; // Valor do elemento
        Node *prox; //Prox
        Node *topo;
        int numel;
    public:
        Node();
        void setItem(Tipo);
        void setNumel(int);
        Tipo getItem();
        int getNumel();
        void push(Tipo);
        Tipo pop();
        bool empty();
        int size();
        ~Node();
};
#endif