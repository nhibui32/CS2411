#include "NumberArray.h"
#include <__config>
#include <iostream>
using namespace std;

NumberArray::NumberArray(int s){
    if (size >= 0){
        size = s;
        arrPtr = new float[size];
    }
    else{
        cout << "Error! Size of the array be greater than 0.";
    }
}
NumberArray::~NumberArray(){
    delete[] arrPtr;
    arrPtr = nullptr;
}

void NumberArray::setArrayElemenValue(int index, float value){
    if (index >= 0 || index < size){
        arrPtr[index] = value;
    }
    else{
        cout << "Out of bound error";
        exit(EXIT_FAILURE);
    }
}

float NumberArray::getArrayElemenValue(int index){
    if(index < 0 || index >= size){
        cout << "Out of bound error";
        exit(EXIT_FAILURE);
    }

    return arrPtr[index];
}

float NumberArray::average(){
    float average, total = 0;
    for(int i=0 ; i <size; i++){
        total = total + arrPtr[i];
    }
    return total/size;
}
