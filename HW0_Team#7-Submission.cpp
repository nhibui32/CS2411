/*
Homework:0
Team: 7 
Team Members:
	- Member - Collin Mendoza: 33.3% 
	- Member - Zaria Richards: 33.3%
	- Member - Ngoc Anh Nhi Bui: 33.3%

Submission Date:
A car with a 20-gallon gas tank averages 23.5 miles per
gallon when driven in town, and 28.9 miles per gallon when driven on the
highway. Write a program that calculates [50 points] and displays the distance
the car can travel on one tank of gas when driven in town and when driven on the
highway [30 points] 
Distance = Number of Gallons x Average Miles per Gallon
*/

//C++ HEADER 

#include <iostream>             // the iodtream header to allow input and output operations in the program 
using namespace std;            // import the std namespace, allow the code uses the standard version of the 
int main ()                     // function name main 
{
    //INPUTING OF INFORMATION
   
    const int gallon_gas = 20;                              // defines the gallon of gas, this is a constant number so we use const here. 

    const double avg_miles_per_gallon_in_town = 23.5;      // defines the average miles per gallon of gas the car can drive in town 23.5 is a constant decimal number, so we use const double. 

    const double avg_miles_per_gallon_in_highway = 28.9;   // having the same explanation as line 24, but this is the own driving in highway. 

    double distance_in_town, distance_in_highway;          //define the variable to calculate the distance in town and high way. 


    // CALCULATIONS 

    distance_in_town = gallon_gas * avg_miles_per_gallon_in_town;         // calculate the distance the car can drive in town 
    
    distance_in_highway = gallon_gas * avg_miles_per_gallon_in_highway;  // calculate the distance the car can drive in highway 

    //OUTPUT 

    cout << "The distance the car can travel on one tank of gas when in town is: " << distance_in_town << " miles." << endl; // display the message and the result
    
    cout << "The distance the car can travel on one tank of gas when in town is: " << distance_in_highway << " miles." << endl; // display the message and the result 

    return 0; 
}