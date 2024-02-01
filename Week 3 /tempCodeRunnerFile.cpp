/*
Lab:0
Team: 7 
Team Members:
	- Member - Collin Mendoza: 33.3%
	- Member - Zaria Richards: 33.3%
	- Member - Ngoc Anh Nhi Bui: 33.3%

Submission Date:
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
    float theater_gross, adult_gross, child_gross;
    float box_office_profit, paid_to_distributor;
    int adult_ticket, child_ticket; 
    const float adult_ticket_price = 10.00;
    const float child_ticket_price = 5.00;
    string movie_name;

    cout << "Movie Name: "; 
    getline(cin, movie_name);
    cout << "Adult Tickets Sold:  ";
    cin >> adult_ticket;
    cout << "Child Tickets Sold: ";
    cin >> child_ticket;

    adult_gross = adult_ticket * adult_ticket_price;
    child_gross = child_ticket * child_ticket_price;
    theater_gross = adult_gross + child_gross;
    box_office_profit = theater_gross * 20 / 100;
    paid_to_distributor = theater_gross - box_office_profit;

    cout << "Gross Box Office Profit: " << setprecision(2) << fixed << setw(3) << "$ " << theater_gross << endl;
    cout << "Net Box Office Profit: " << setw(4) << "$ " << box_office_profit << endl;
    cout << "Amount Paid to Distributor: " << setw(3) << "$ " << paid_to_distributor << endl;

    return 0;
}
