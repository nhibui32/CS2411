/*
Homework:0
Team: 7 
Team Members:
	- Member - Collin Mendoza: 33.3% 
	- Member - Zaria Richards: 33.3%
	- Member - Ngoc Anh Nhi Bui: 33.3%

Problem Statement:
Write a program that asks for an angle in degrees and converts it to radians. Display the value in radians left justified, in fixed point notation, with 4 places of precision, in a field 5 spaces wide, making sure the decimal point is always displayed. [40 points]

*/
//C++ HEADER 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{
    float angle_in_degrees, angle_in_radians;
    const float pi = 3.1415;

    angle_in_radians = angle_in_degrees / 180 * pi;

    cout << "Enter an angle in degrees: ";
    cin >> angle_in_degrees;
    cout << "The value of: " << angle_in_degrees << " in radians would be "  << angle_in_radians;
    system ("pause");
    return 0;


}