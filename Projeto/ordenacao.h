    #ifndef _ORDENACAO_H
    #define _ORDENACAO_H
    #include <iostream>
    using namespace std;
    
    
    namespace ED {
        template <typename T>
        class Ordenacao{
            public:
                static void heapsort(T *vet, int n);
                //. . .
            private:
                static
                    void heapify(T *vet, int pai, int heapsize);
                    //. . .
        };
        // Implementações
        
        template <typename T>
        void Ordenacao<T>::heapify(T *vet, int pai, int heapsize) {
            int fl, fr, imaior;
            fl = (pai << 1) + 1;
            fr = fl + 1;
            while (true) {
                if ((fl < heapsize) && (vet[fl] > vet[pai])) imaior = fl;
                else imaior = pai;
                if ((fr < heapsize) && (vet[fr] > vet[imaior])) imaior = fr;
                if (imaior != pai){
                    T aux = vet[pai];
                    vet[pai] = vet[imaior];
                    vet[imaior] = aux;
                    pai = imaior;
                    fl = (pai << 1) + 1;
                    fr = fl + 1;
                }
                else break;
            }
        }
        
        template <typename T>
        void Ordenacao<T>::heapsort(T *vet, int n) {
            int i;
            for (i=(n>>1)-1; i>=0; i--) heapify(vet, i, n);
            for (i=n-1; i > 0; i--) {
                T aux = vet[0];
                vet[0] = vet[i];
                vet[i] = aux;
                heapify(vet, 0, i);
            }
        }
        
    }
    #endif 