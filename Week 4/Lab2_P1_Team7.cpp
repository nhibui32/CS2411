/*
Lab:1
Team: 7 
Team Members:
	- Member - Collin Mendoza: 33.3%
	- Member - Zaria Richards: 33.3%
	- Member - Ngoc Anh Nhi Bui: 33.3%

Problem-1
Develop a C++ program that to determine the gross pay for employees. The company pays “straight time” for the first 40 hours worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours. Allow the user to enter the number of hours an employee worked last week and the hourly rate of each employee [20 points]. Your program should input this information for each employee and should calculate [30 points] and display the employee’s gross pay [20 points]. Use an if/else if/else block.
Input validation: Make sure the user does not enter any negative values [10 points].

Programming Style: Make sure the programming style is followed. [10 points]
Programming Comments: Please make sure the code is well-commented. [10 points]

Note: Use of ChatGPT or similar generative AI is not allowed. 
*/
#include <iostream>
using namespace std;
int main ()
{
	const int STRAIGHT_TIME = 40;
	const float TIME_AND_HALF = 1.5;
	float hours = 0.0f;
	float pay_rate = 0.0f;
	float gross_pay = 0.0f;
	float overtime_hours = 0.0f;
	float pay_rate_overtime = 0.0f;

	// 1- INPUT
	cout << "Enter your working hours: ";
	cin >> hours;
	if (hours < 0 ) 
	{
		cout << "Error! Please enter a positive number for hours \n";
	}

	cout << "Please enter the pay rate: ";
	cin >> pay_rate;
	if (pay_rate < 0 )
	{
		cout << "Error! Please enter a positive number for pay rates \n";
	}

	// 2-Processing
	if (hours <= 0 && hours <= STRAIGHT_TIME)
	{
		gross_pay = pay_rate * hours ;
	}
	else 
	{
		overtime_hours = hours - STRAIGHT_TIME;
		pay_rate_overtime = overtime_hours * (pay_rate * TIME_AND_HALF);
		gross_pay = (pay_rate * STRAIGHT_TIME) + pay_rate_overtime;
	}

	// 3-Output
	cout << "Your gross pay is " << gross_pay << endl;

	system("Pause");
	return 0;
}