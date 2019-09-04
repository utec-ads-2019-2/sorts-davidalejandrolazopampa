#ifndef COUNTING_H
#define COUNTING_H

#include "sort.h"
#include <algorithm>

class CountingSort : public Sort {       
    public:
        CountingSort(int *elements, size_t size) : Sort(elements, size) {}

    void execute() {
        int* OrdenLista = new int[size]{0};
        //minimo elemento
        int menor = *min_element(elements,elements+size);
        //maximo elemento
        int mayor = *max_element(elements,elements+size);

        int length = mayor - menor + 1;
        int* count = new int[length]{
            0
        };

        for (int i = 0; i < size; ++i) {
            count[elements[i]-menor]++;
        }

        for (int i = 1; i < length; ++i) {
            count[i]+=count[i-1];
        }

        for (int i = size - 1; i >= 0; --i) {
            OrdenLista[count[elements[i] - menor] - 1] = elements[i];
            count[elements[i] - menor]--;
        }

        for (int i = 0; i < size; ++i) {
            elements[i] = OrdenLista[i];
        }

        delete[] count;
        delete[] OrdenLista;
    }

        inline string name() { return "CountingSort"; }
};

#endif