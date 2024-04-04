/*
Lab: 4 
Team: 7 
Team Members:
	- Member - Collin Mendoza: 
	- Member - Zaria Richards: 
	- Member - Ngoc Anh Nhi Bui:


*/
#include <iostream>
using namespace std;
double calculateRetail();
int main()
{
    // variables
    double wholesale_cost;
    double percentage; 
    double retail_price;
    //input
    cout << "Enter the wholesale cost: " ;
    cin >> wholesale_cost;
    cout << "Enter the markup percentage: ";
    cin >> percentage; 
    double calculateRetail(wholesale_cost,percentage);
    cout << "The retail price is: " << retail_price;
    
    // processing 

    //output

    return 0;
}
double calculateRetail (double wholesale_cost, double percentage)
{
double retail_price = (wholesale_cost * (percentage / 100)) +wholesale_cost;
return retail_price;
}