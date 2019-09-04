#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}

    void execute() {
        int j;
        int temp;
        for (int gap = (size/2); gap > 0; gap /= 2){
            for (int i = gap; i < size; ++i){
                temp = elements[i];

                for (j = i; j >= gap && elements[j - gap] > temp; j -= gap){
                    elements[j] = elements[j - gap];
                }
                elements[j] = temp;
            }
        }
    }

    inline string name() {
            return "ShellSort";
        }
};

#endif