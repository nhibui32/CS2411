// This program demonstrates the Selection Sort algorithm.
#include <iostream>
using namespace std;

// Function prototypes
void selectionSort(int[], int);
void swap(int &, int &);
int count1 = 0;

int main()
{
   const int SIZE = 4;

   // Array of unsorted values
   int values[SIZE] = {11, 2, 29, 3 };

   // Display the unsorted array.
   cout << "The unsorted values:\n";
   for (auto element : values)
      cout << element << " ";
   cout << endl;

   // Sort the array.
   selectionSort(values, SIZE);

   // Display the sorted array.
   cout << "The sorted values:\n";
   for (auto element : values)
      cout << element << " ";
   cout << endl;

   cout << count1 << endl;

   return 0;
}

//********************************************************************
// The selectionSort function sorts an int array in ascending order. *
//********************************************************************
void selectionSort(int array[], int size)
{
   int minIndex, minValue;
   

   for (int start = 0; start < (size - 1); start++)
   {
      minIndex = start;
      minValue = array[start];
      for (int index = start + 1; index < size; index++)
      {
          count1++;
         if (array[index] < minValue)
         {
            minValue = array[index];
            minIndex = index;
         }
         
      }
      swap(array[minIndex], array[start]);
   }
    
}

void swap(int &a, int &b)
{
   count1 = count1+3;
   int temp = a;
   a = b;
   b = temp;
}

