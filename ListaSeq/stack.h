    #ifndef __Stack_H__
    #define __Stack_H__
    #include <iostream>
    using namespace std;
    
    template <class Tipo>
    class Pilha {
        private:
            int topo, size;
            Tipo *vetor;
        public:
            Pilha(int);
            ~Pilha();
            void push(Tipo);
            Tipo pop();
            void setTopo(int);
            void setSize(int);
            int getTopo();
            int getSize();
            bool full();
            bool empty();
    };
    #endif