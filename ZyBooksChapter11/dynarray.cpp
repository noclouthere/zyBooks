//
// Created by 105166 on 1/31/19.
//

#include "dynarray.h"

DynArray::DynArray() {

    _capacity = 2;
    _size = 0;
    myArray = new int[_capacity];

}

DynArray::~DynArray() {
    delete [] myArray; //deletes the array named myArray
    myArray = nullptr;

}

DynArray::DynArray(int n) {
    _capacity = n;
    _size = 0;
    myArray = new int[_capacity];
}

int DynArray::size() {
    return _size;
}

int DynArray::capacity() {
    return _capacity;
}

void DynArray::clear() {
    delete [] myArray;
    _size = 0;
    _capacity = 2;
    myArray = new int[_capacity];
}

void DynArray::push_back(int n) {
    //Do we have room to push
    if(_size > _capacity){
        int * tempArray = new int[_capacity * 2];
        for (int i = 0;i<_size;i++) {
            tempArray[i] = at(i);
        }
        delete [] myArray;
        myArray = tempArray;
        _capacity *= 2;
    }

    myArray[_size] = n;
    _size++;
}

int DynArray::at(int n) {

    if(n >= _size)
        throw std::runtime_error("Invalid Index");
    else
        return myArray[n];
}

void DynArray::pop_back() {
    if (_size > 0)
        _size--;
}


