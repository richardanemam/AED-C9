    #include <stdio.h>
    #include "stack.h"
    
    template <class Tipo>
    Pilha<Tipo>::Pilha(int size){
        this->setTopo(-1);
        this->setSize(size);
        vetor = new Tipo[size];
    }
    
    template <class Tipo>
    void Pilha<Tipo>::setSize(int size){
        this->size = size;
    }
    
    template <class Tipo>
    void Pilha<Tipo>::setTopo(int topo){
        this->topo = topo;
    }
    
    template <class Tipo>
    int Pilha<Tipo>::getSize(){
        return this->size;
    }
    
    template <class Tipo>
    int Pilha<Tipo>::getTopo(){
        return this->topo;
    }
    
    template <class Tipo>
    void Pilha<Tipo>::push(Tipo el){
        if(this->getTopo() == this->getSize() - 1)
            throw "ERROR. The stack is full!";
        
        vetor[++topo] = el;    
    }
    
    template <class Tipo>
    Tipo Pilha<Tipo>::pop(){
        if(this->getTopo() < 0)
            throw "ERROR. The stack is empty!";
            
        return vetor[topo--];
    }
    
    template <class Tipo>
    bool Pilha<Tipo>::full(){
        return (this->getTopo() == this->getSize() - 1);
    }
    
    template <class Tipo>
    bool Pilha<Tipo>::empty(){
        return (this->getTopo() < 0);
    }
    
    template <class Tipo>
    Pilha<Tipo>::~Pilha(){
        delete [] vetor;
    }