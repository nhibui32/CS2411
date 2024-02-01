/*
Lab:0
Team: 7 
Team Members:
	- Member - Collin Mendoza: 33.3%
	- Member - Zaria Richards: 33.3%
	- Member - Ngoc Anh Nhi Bui: 33.3%

A movie theater only keeps a percentage of the revenue earned from ticket sales. 
The remainder goes to the movie distributor. Write a program that calculates a theater’s gross [20 points], net box ofﬁce proﬁt [15 points], and amount paid to the distributor [10 points] for a night. The program should ask for the name of the movie [5 points] and how many adult [5 points] and child [5 points] tickets were sold. Assume that an adult ticket costs $10.00 and a child’s ticket is $5.00. Assume the theater keeps 20 percent of the gross box ofﬁce proﬁt.
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
    do
    {
        cout << "Adult Tickets Sold:  ";
        cin >> adult_ticket;
    } while (adult_ticket > 0);
    

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
