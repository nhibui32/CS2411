/*
Homework:0
Team: 7 
Team Members:
	- Member - Collin Mendoza: 33.3% 
	- Member - Zaria Richards: 33.3%
	- Member - Ngoc Anh Nhi Bui: 33.3%

Problem Statement:
The monthly payment on a loan may be calculated by the following formula:
Payment=  〖Rate*(1+Rate)〗^N/(〖((1+Rate)〗^N-1))*L
Rate is the monthly interest rate, which is the annual interest rate divided by 12. (12% annual interest would be 1 percent monthly interest.) N is the number of payments and L is the amount of the loan. Write a program that asks for these values and displays a report similar to the following: [40 points]

Loan Amount:                 $ 10000.00 
Monthly Interest Rate:                 1% 
Number of Payments:                   36 
=============================
Monthly Payment:         $       332.14 
*/
//C++ HEADER 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () 
{
    double loan_amount ; // defining loan amount variable
    float monthly_interest; // defining mounthly intrest
    float monthly_payment; // defining monthly payment
    float annual_rate; // defining annual rate
    int number_of_payments; // defining number of payments

    cout << "Enter the annual interest rate: "; // display the message to ask users enter the annual interest rate
    cin >> annual_rate; // users enter the interest rate

    monthly_interest = annual_rate / (12 * 100) ; // calculate the monthly interest rate

    cout << "Enter the number of payments: "; // display the message to ask users enter the number of payments
    cin >> number_of_payments; //user enter the number of payments;

    cout << "Enter the amount of the loan: "; //display the message to ask users enter the amount of loan
    cin >> loan_amount; // users enter the amount of loan

    // calculate the monthly_payment
    monthly_payment = (monthly_interest * pow(1+ monthly_interest, number_of_payments)) / (pow(1+monthly_interest, number_of_payments) -1) * loan_amount;

    cout << setprecision(2) << fixed;
    cout << setw(20) << showpoint << left << "Loan Amount: " << setw(10)
    << "$" << loan_amount << right << endl; // Displays Loan Amount
    cout << setw(30) << left <<"Monthly Interest Rate: " << right << (monthly_interest*100) << "%" << endl; // Displays Monthly Interest Rate
    cout << setw(30) << left << "Number of Payments: " << number_of_payments << right << endl; // Displays Number of Payments
    cout << "------------------------------" << endl; // Spacer
    cout << "------------------------------" << endl; // Spacer
    cout << setw(20) << left << "Monthly Payment: " << setw(9) << "$" << monthly_payment <<
    right << endl; // Displays Monthly Payment
system("pause");
return 0;
}
