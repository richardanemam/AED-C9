    #include "node.h"
    #include <stdio.h>
    
    template <class Tipo>
    Node<Tipo>::Node(){
        topo = NULL;
        this->setNumel(0);
    }
    
    template <class Tipo>
    void Node<Tipo>::setItem(Tipo item){
        this->item = item;
    }
    
    
    template <class Tipo>
    void Node<Tipo>::setNumel(int numel){
        this->numel = numel;
    }
    
    template <class Tipo>
    Tipo Node<Tipo>::getItem(){
        return this->item;
    }
    
    template <class Tipo>
    int Node<Tipo>::getNumel(){
        return this->numel;
    }
    
    template <class Tipo>
    void Node<Tipo>::push(Tipo el){
        Node *nova = new Node;
        
        if(nova == NULL) throw "No memory!";
        
        nova->item = el;
        nova->prox = topo;
        topo = nova;
        this->setNumel(this->getNumel() + 1);
    }
    
    template <class Tipo>
    Tipo Node<Tipo>::pop(){
        Node *temp;
        Tipo valor = topo->item;
        temp = topo;
        topo = topo->prox; // Faz o topo apontar para o mesmo endereço apontado pela a célula do topo para a célula anterior 
        temp->prox = NULL; //Medida de segurança, pois não há mais como acessar essa célula na memória
        delete temp;
        this->setNumel(this->getNumel() - 1);
        return valor;
    }
    
    template <class Tipo>
    bool Node<Tipo>::empty(){
        return (this->getNumel == 0);
    }
    
    template <class Tipo>
    int Node<Tipo>::size(){
        return this->getNumel;
    }
    
    template <class Tipo>
    Node<Tipo>::~Node(){
        Node *aux;
        while(topo){
            aux = topo;
            topo = topo->prox;
            delete aux;
        }
    }