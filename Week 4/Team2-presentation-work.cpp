/*Ngoc Anh Nhi Bui 
02/03/2024
Team 2 presentation - practice */

#inlcude <iostream>
using namespace std;
int main ()
{
    // constant variable
    const int monthly_fee = 10;
    const int extra_fee = 15;

    // variable
    int amount_of_check; 
    float beginning_balance, bank_service_fee;

    do {
    cout << "The beginning balance: " ;
    cin >> beginning_balance; 
    } while(beginning_balance >= 0)
    cout << "The amount of check: ";
    cin >> amount_of_check;


}