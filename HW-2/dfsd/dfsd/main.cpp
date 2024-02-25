/*
Homework 2
Team: 7
Team Members:
    - Member - Collin Mendoza: 33.3%
    - Member - Zaria Richards: 33.3%
    - Member - Ngoc Anh Nhi Bui: 33.3%

*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
void display_menu()
{
    cout << "***Banking System***" << endl << endl;
    cout << "\t Select one option below:" << endl;
    cout << "\t 1. Account summary" << endl;
    cout << "\t 2. Deposit" << endl;
    cout << "\t 3. Withdraw" << endl;
    cout << "\t 4. Quit" << endl;
}

void cus_001()
{
    fstream file;
    file.open("Cust_001.dat", ios::in | ios::out);

    if(!file.is_open())
    {
        cout << "Failed to open the file." << endl;
    }

    string name;
    getline(file,name); //Read the name from the first line

    cout << "Bank User: " << name << endl;

    string line;
    int sum = 0;
    while (getline(file,line))
    {
        stringstream ss(line);
        string date;
        int amount;
        // Read each line from the file
        ss >> date >> amount;
        //Display the data and amount
        cout << "Date: " << date << ", Amount: " << amount << endl;
        // Add the amount to the sum
        sum += amount;
    }

    cout << "Total sum: " << sum << endl;
    file.close();
}

int main ()
{
    // Variables:
    int option;
    string ID;
    display_menu();

    // Processing
    do
    {
        cout << "Enter your option: ";
        cin >> option;
        if (option >4 || option < 1)
        {
            cout << "Input Invalidation. PLease enter again a number in range from 1 to 4. " << endl;
        }
    } while (option >4 || option < 1);

    switch(option)
    {
        case 1:
            int num;
            cout << "Enter a 3-digit customer ID: ";
            cin >> ID;
            if (ID == "001")
            {
                void cus_001();
            }else
            {
                cout <<"Wait a minute. LOL";
            }

    }
    return 0;
}


