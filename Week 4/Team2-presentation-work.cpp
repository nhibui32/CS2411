/*Ngoc Anh Nhi Bui 
02/03/2024
Team 2 presentation - practice 
A bank charges $10 per month plus the following check fees for a commercial checking account:
	$.10 each for fewer than 20 checks
	$.08 each for 20–39 checks
	$.06 each for 40–59 checks
	$.04 each for 60 or more checks

The bank also charges an extra $15 if the balance of the account falls below 
$400 (before any check fees are applied). Write a program that asks for the beginning balance and the number of checks written. Compute and display the bank’s service fees for the month.

Input Validation: Do not accept a negative value for the number of checks written. If a negative value is given for the beginning balance, display an urgent message indicating the account is overdrawn.

Specifically, you will have to 
1)	Explain the problem statement (10 points). 
2)	Compile and execute the code (10 points).
3)	Explain the outputs (10 points)
4)	Go through the code line-by-line and explain each line (50 points). 
5)	Answer the audience’s questions (20 points).  
*/

#include <iostream>
using namespace std;
int main ()
{
    // variable
    int amount_of_check; 
    float beginning_balance, bank_service_fee = 10;
    

    do 
    {
        cout << "The beginning balance: " ;
        cin >> beginning_balance; 
        if (beginning_balance < 0)
        {
            cout << "Invalid valuation. Enter a positive number. \n";
        }
    } while(beginning_balance < 0);

    do
    {
        cout << "The amount of check: ";
        cin >> amount_of_check;
        if (amount_of_check < 0)
        {
            cout << "Invalid valuation. Enter a positive number. \n";
        }
    } while (amount_of_check < 0);

    if (beginning_balance >= 0 && beginning_balance < 400)
    {
        bank_service_fee += 15;
    }
    else
    {
        bank_service_fee += 0;
    }

    if(amount_of_check >= 0 && amount_of_check < 20)
    {
        bank_service_fee += amount_of_check * 0.10;
    }
    else if (amount_of_check <= 39 )
    {
        bank_service_fee += amount_of_check * 0.08;
    }
    else if (amount_of_check <= 59)
    {
        bank_service_fee += amount_of_check * 0.06;
    }
    else
    {
        bank_service_fee += amount_of_check * 0.04;
    }

    cout << "The bank’s service fees: $" << bank_service_fee; 

    return 0;

}