// Problem-2 [50 points]: Write a program that will read two floating point numbers (the first read into a variable called first and the second read into a variable called second) and then calls the function swap with the actual parameters first and second. The swap() function having formal parameters number1 and number2 should swap the value of the two variables. The function parameters are required to be pointers. 
#include <iostream>
using namespace std;
int main()
{
    float first, second;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the sencond number: ";
    cin >> second; 
    return 0; 
}