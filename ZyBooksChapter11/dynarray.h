//
// Created by 105166 on 1/31/19.
//

#ifndef ZYBOOKSCHAPTER11_DYNARRAY_H
#define ZYBOOKSCHAPTER11_DYNARRAY_H

#include <stdexcept>


class DynArray {
private:
    //capacity is how many it can hold
    //size is how many it is holding
    int _size,_capacity;
    int * myArray;
public:
    DynArray();
    ~DynArray();
    DynArray(int n);
    int size();
    int capacity();
    void clear();
    void push_back(int n);
    void pop_back();
    int at(int n);

};


#endif //ZYBOOKSCHAPTER11_DYNARRAY_H
