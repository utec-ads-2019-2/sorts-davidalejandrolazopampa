#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}

    void execute() {
        int temporal;
        int inicio,codigo;
        for(int i = 0; i < size -1; ++i){
            inicio = i;
            codigo = inicio + 1;
            for(int j = codigo; j < size ; ++j ){
                if(elements[inicio]>elements[j]){
                    inicio = j;
                }
            }
            temporal = elements[i];
            elements[i] = elements[inicio];
            elements[inicio] = temporal;
        }

    }

    inline string name() {
            return "SelectSort";
        }
};

#endif