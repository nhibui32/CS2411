/*
Lab: 4
Team: 7
Team Members:
    - Member - Collin Mendoza:
    - Member - Zaria Richards:
    - Member - Ngoc Anh Nhi Bui:
When an object is falling because of gravity, the following formula can be used to determine the distance the object falls in a specific time period:

d=1/2 〖gt〗^2

The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is the amount of time, in seconds, that the object has been falling.

// float fallingDistance( float t)
{
Return d=(1/2)(9.8)pow(t,2)
}

Write a function named fallingDistance that accepts an object’s falling time (in seconds) as an argument. The function should return the distance, in meters, that the object has fallen during that time interval. Write a program that demonstrates the function by calling it in a loop that passes the values 1 through 10 as arguments, and displays the return value. [20 points]


*/
#include <iostream>
#include <cmath>
using namespace std;
float fallingDistance(float);
int main()
{
    float t = 1 ;
    float distance;
    for (t=1 ; t<= 10 ; t++)
    {
        distance = fallingDistance(t);
        cout << "When the time is " << t << " the distane of that falling odject would be: " << distance <<endl;
    }
    return 0;
}
float fallingDistance(float time)
{
    float d;
    const float g = 9.8;
    d = (0.5) * g * pow (time, 2);
    return d;
}
