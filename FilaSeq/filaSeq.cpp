    #include "filaSeq.h"
    
    template <class Tipo>
    filaSeq<Tipo>::filaSeq(int size){
        this->setSize(size);
        this->setIni(0);
        this->setFim(-1);
        this->setNelem(0);
        vetor = new Tipo[10];
    }
    
    template <class Tipo>
    void filaSeq<Tipo>::setFim(int fim){
        this->fim = fim;
    }
    
    template <class Tipo>
    void filaSeq<Tipo>::setIni(int ini){
        this->ini = ini;
    }
    
    template <class Tipo>
    void filaSeq<Tipo>::setNelem(int nelem){
        this->nelem = nelem;
    }
    
    template <class Tipo>
    void filaSeq<Tipo>::setSize(int size){
        this->size = size;
    }
    
    template <class Tipo>
    int filaSeq<Tipo>::getSize(){
        return this->size;
    }

    template <class Tipo>
    int filaSeq<Tipo>::getNelem(){
        return this->nelem;
    }    
    
    template <class Tipo>
    int filaSeq<Tipo>::getIni(){
        return this->ini;
    }
    
    template <class Tipo>
    int filaSeq<Tipo>::getFim(){
        return this->fim;
    }
    
    template <class Tipo>
    void filaSeq<Tipo>::insere(Tipo el){
        //if(nelem == size - 1) throw "Fila cheia";
        this->setFim(this->getFim() + 1);
        if (this->getFim() >= this->getSize()) this->setFim(0);
        vetor[this->getFim()] = el;
        this->setNelem(this->getNelem() + 1);
    }
    
    template <class Tipo>
    Tipo filaSeq<Tipo>::retira(){
        //if(nelem == 0) throw "Fila vazia";
        Tipo aux = vetor[ini];
        this->setIni(this->getIni() + 1);
        
        if(this->getIni() >= this->getSize()) this->setIni(0);
        this->setNelem(this->getNelem() - 1);
        
        return (aux);
    }
    
    template <class Tipo>
    bool filaSeq<Tipo>::cheia(){
        if(this->getNelem() == this->getSize() - 1) return true;
        return false;    
    }
    
    template <class Tipo>
    bool filaSeq<Tipo>::vazia(){
        if(this->getNelem() == 0) return true;
        return false;
    }
    
    template <class Tipo>
    filaSeq<Tipo>::filaSeq(){
        delete [] vetor;
    }