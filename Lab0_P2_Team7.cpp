/*
Lab:0
Team: 7 
Team Members:
	- Member - Collin Mendoza: 
	- Member - Zaria Richards: 
	- Member - Ngoc Anh Nhi Bui:

Write a program that holds the prices of the five items in five variables. Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 7 percent. [40 points]
*/

#include <iostream>
using namespace std;

int main()
{
    //declare the variables 
    double price_of_item_1 = 15.95;
    double price_of_item_2 = 24.95;
    double price_of_item_3 = 6.95;
    double price_of_item_4 = 12.95;
    double price_of_item_5 = 3.95;
    double subtotal_of_the_sale = 0, the_amount_of_the_sales_tax = 0, the_total = 0;
    // display the prices of items 
    cout << "The price of item 1 is: $" << price_of_item_1 << endl;
    cout << "The price of item 2 is: $" << price_of_item_2 << endl;
    cout << "The price of item 3 is: $" << price_of_item_3 << endl;
    cout << "The price of item 4 is: $" << price_of_item_4 << endl;
    cout << "The price of item 5 is: $" << price_of_item_5 << endl;
    //calculate the subtotal of the items
    subtotal_of_the_sale = price_of_item_1 + price_of_item_2 + price_of_item_3 + price_of_item_4 + price_of_item_5;
    cout << "- - - - - - - - - - - - - - - - - - - " << endl;
    cout << "The subtotal of 5 items is: $" <<subtotal_of_the_sale << endl;
    //calculate the price of the sales tax
    cout << "- - - - - - - - - - - - - - - - - - - " << endl;
    the_amount_of_the_sales_tax = (7 * subtotal_of_the_sale) / 100;
    cout << "The amount of the sales tax is: $" << the_amount_of_the_sales_tax << endl;
    //calculate the total
    cout << "- - - - - - - - - - - - - - - - - - - " << endl;
    the_total = subtotal_of_the_sale + the_amount_of_the_sales_tax;
    cout << "The total is: $" << the_total;
    return 0;
}