/* Test code to run files*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
void add()
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
   
    }


    file.close();

}
int main ()
{
    int sum = 0;
    int amount;
    add();
    sum += amount; 
    cout << "Total sum: " << sum << endl;
    return 0;
}