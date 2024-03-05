/*
Lab: 4
Team: 7
Team Members:
    - Member - Collin Mendoza:
    - Member - Zaria Richards:
    - Member - Ngoc Anh Nhi Bui:
Write a program that lets the user enter 3 test scores into an array. Makes sure to
perform input validation meaning don’t allow test scores below zero and more
than 100 [20 points]. The program should then write functions for each of the
following computations.
1. Average of these numbers [15 points],
2. The largest value [30 points], and
3. the smallest value [10 points].
The functions should take the whole array and return the computed values to the
driver function.
Programming Style: Make sure the programming style is followed. [10 points]
Programming Comments: Please make sure the code is well-commented. [10
points]
*/
#include <iostream>
using namespace std;

float computeAverage( float vals[], int SIZE)
{
    float sum = 0;
    for (int i = 0 ; i < SIZE ; i++)
    {
        sum += vals[i];
    }
    return sum / SIZE;
}

float computeLargest(float vals[] , int SIZE)
{
    float largest = vals[0];
    for (int i = 0 ; i < SIZE ; i++)
    {
        if (vals[i] > largest)
        {
            largest = vals[i];
        }
    }
    return largest;
}

float computeSmallest(float vals[] , int SIZE)
{
    float smallest = vals[0];
    for (int i = 0 ; i < SIZE ; i++)
    {
        if (vals[i] < smallest )
        {
            smallest = vals[i];
        }
    }
    return smallest;
}

int main()
{
     
    const int SIZE1 = 5;
    const int SIZE = 3; //stores the size of the array 
    float scores[SIZE] = {0}; // stores 3 test scores
    float tempScores = 0; // Stores temp score value
    float average = 0; // stores average number 
    float largest = 0; // stores largest number 
    float smallest = 0; // stores smallest number
    // 1- input
    for (int  i = 0 ; i <SIZE1 ; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << "Please enter the score of student: " << i+1 << ": "; 
            cin >> tempScores;
             while (tempScores < 0 || tempScores > 100)
        {
            cout << "Error! Please enter a test score between 0 and 100." << endl;
            cout << "Please enter test score- " << i+1 << ":";
            cin >> tempScores;
        }
        scores[i] = tempScores;
        }
        // cout << "Please enter test score " << i+1 << ": ";
        
        // Input validation

    }



    // 2-Processing 
    average = computeAverage(scores, SIZE );
    largest = computeLargest(scores, SIZE);
    smallest = computeSmallest(scores, SIZE);

    // Output
    cout << "The average number is: " << average << endl;
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}