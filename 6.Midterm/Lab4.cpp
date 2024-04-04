/*
Lab: 4 
Team: 7 
Team Members:
	- Member - Collin Mendoza: 
	- Member - Zaria Richards: 
	- Member - Ngoc Anh Nhi Bui:
Problem-1
Write a program that asks the user to enter an item’s wholesale cost and its markup percentage [20 points]. It should then display the item’s retail price [10 points]. For example: 
•	If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 10.00.
•	If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s retail price is 7.50.

The program should have a function named calculateRetail that receives the wholesale cost and the markup percentage as arguments, and returns the retail price of the item. [40 points] // double calculateRetail(double wholesale, double markuo_percentage) 

Input Validation: Do not accept negative values for either the wholesale cost of the item or the markup percentage. [10 points]

Programming Style: Make sure the programming style is followed. [10 points]
Programming Comments: Please make sure the code is well-commented. [10 points]

Note: Use of ChatGPT or similar generative AI is not allowed. 

*/

#include <iostream>
using namespace std;
double calculateRetail();
double calculateRetail(double w_c, double m_p);
int main()
{
    // variables
    double wholesale_cost;
    double markup_percent; 
    double retail_cost = 0;

    //input
     cout << "Please enter the wholseale of the item: ";
    cin >> wholesale_cost;
    while (wholesale_cost < 0)
    {
        cout << "Error! Please enter a positive number: ";
        cin >> wholesale_cost;
    }

    cout << "Please enter the markup percentage of the item: ";
    cin >> markup_percent; 
    while (markup_percent < 0)
    {
        cout << "Error! Please enter a positive number: ";
        cin >> markup_percent;
    }


    retail_cost = calculateRetail(wholesale_cost, markup_percent);
    cout << "The retial cost would be: " << retail_cost;
    // processing 


    return 0;
}
        double calculateRetail ( double w_c, double m_p)
    {
        double retail_cost;
        return retail_cost = w_c + (w_c * (m_p / 100));
    }