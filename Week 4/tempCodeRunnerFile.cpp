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
#include <iomanip>
using namespace std;
int main ()
{
    // 1- VARIABLES 
    float gross_profit, adult_ticket_total, child_ticket_total; 
    float net_profit, distributer_profit;
    int adult_tickets, child_tickets; 
    const float adult_cost = 10.00f;
    const float child_cost = 5.00f;
    const double theater_percent = 0.2; 
    string movie_name;

    // 2 - INPUT
    cout << endl << endl << "Program input" << endl << endl;
    cout << "Enter the name of the movie: "; 
    getline(cin, movie_name);
    do
    {
        cout << "How many adult tickets were sold? ";
        cin >> adult_tickets;
        if (adult_tickets < 0)
        {
            cout << "Input Validation. Enter a positive number. \n";
        }
    } while(adult_tickets <0);

    do
    {
        cout << "How many child tickets were sold? ";
        cin >> child_tickets;
        if (child_tickets < 0)
        {
            cout << "Input Validation. Enter a positive number. \n";
        }
    }while(child_tickets <0);

    // 3 - PROCESS 
    adult_ticket_total = adult_tickets * adult_cost;
    child_ticket_total = child_tickets * child_cost;
    gross_profit = adult_ticket_total + child_ticket_total;
    net_profit = gross_profit * theater_percent;
    distributer_profit = gross_profit - net_profit;

    // 4 - OUTPUT
    cout << endl << endl << "Program output" << endl << endl;
    cout << left << setw(30) << "Movie Name " << left << setw(10) << movie_name << endl;
    cout << left << setw(30) << "Adult Tickets Sold: " << left << setw(10) << adult_tickets << endl;
    cout << left << setw(30) << "Child Tickets Sold: " << left << setw(10) << child_tickets << endl;
    cout << left << setw(30) << "Gross Box Office Profit: " << setprecision(2) << "$ "  << fixed << left << setw(10) << gross_profit << endl;
    cout << left << setw(30) << "Net Box Office Profit: " <<"$ " << left << setw(10) << net_profit << endl;
    cout << left << setw(30) << "Amount Paid to Distributor: " <<"$ " << left << setw(10) << distributer_profit << endl;

    return 0;
}
