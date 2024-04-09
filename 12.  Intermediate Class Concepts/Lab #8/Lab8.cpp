#include <iostream>
#include "NumberArray.h"
using namespace std;

int main(){
    int size =0; // stores the size of the array

    cout << "Please enter the size of the array: ";
    cin >> size;

    NumberArray numbers(size);

    //for loop for setter
    for(int i=0 ; i<size; i++){
        float element_value;
        cout << "Enter the value for the elemnt " << i+1 << " ";
        cin >> element_value;
        numbers.setArrayElemenValue(i,element_value);
    }

    // retrieve a number from any element of the array 
    for (int i= 0 ; i < size; i++ ){
        cout << "number" << i+1 << ": " << numbers.getArrayElemenValue(i) << endl;
    }

    //return the average pf all the numbers stores in the array 
    cout << "the average " << numbers.average();
    

    return 0;
}
