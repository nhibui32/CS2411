#ifndef NUMBER_ARRAY_H
#define NUMBER_ARRAY_H

class NumberArray{
    private:
        float *arrPtr; // Pointer to the array 
        int size;

    public:
        NumberArray(int s);
        ~NumberArray(); // destructor has no parameter 
        void setArrayElemenValue(int index, float value);
        float getArrayElemenValue(int index);
        float average();



};
#endif