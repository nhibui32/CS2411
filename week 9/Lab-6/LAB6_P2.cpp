// Problem-2 [50 points]: Write a program that will read two floating point numbers (the first read into a variable called first and the second read into a variable called second) and then calls the function swap with the actual parameters first and second. The swap() function having formal parameters number1 and number2 should swap the value of the two variables. The function parameters are required to be pointers. 
#include <iostream>
using namespace std;
void swap(double* number1, double* number2)
{
    cout << "The value of the first number now is: " << *number1 << endl;
    cout << "The value of the second number now is: " << *number2 << endl;

    double temp = *number1;
    *number1 = *number2;
    *number2 = temp; 
    
    cout << "The value of the first number after swapping is: " << *number1 << endl;
    cout << "The value of the second number after swapping is: " << *number2 << endl;
}
int main()
{
    double first, second;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the sencond number: ";
    cin >> second; 
    swap(&first, &second);
    return 0; 
}