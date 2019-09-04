#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {       
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

    void execute() {
        // tipo
        int temporal, parte;
        for (int i = 1; i < size; ++i) {
            temporal = elements[i];
            parte = i - 1;
            while (parte >= 0 && elements[parte] > temporal) {
                elements[parte + 1] = elements[parte];
                parte--;
            }
            elements[parte + 1] = temporal;
        }
    }

        inline string name() {
            return "InsertSort";
        }
};

#endif