#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Variable:
    int number = 0; // stpores one number from the file
    int sum = 0; // stores the running total
    string fileName = "/Users/nhibui/Desktop/CS 2411/Week 5/Numbers.txt ";

    ifstream inputFile; // this is the file pointer to an inputfile 
    ofstream outputFile; // this is the file pointer to an outputfile
    inputFile.open(fileName);
    if (inputFile) {
        while (inputFile >> number)
        {
            sum += number;
        }
        inputFile.close();
    }
    else 
    {
        cout << "Error! This file, number.txt, does not exist" << endl ;
    }

    return 0; 



    // 
}