/*
Homework: 3
Team: 7
Team Members:
    - Member - Collin Mendoza: 33.3%
    - Member - Zaria Richards: 33.3%
    - Member - Ngoc Anh Nhi Bui: 33.3%

*/
#include <iostream> // Input/Output stream library
using namespace std; // Standard Library
double averNum(int Num[], const int Array_size) // Value returning function for average number of movies watched
{
    double sum = 0; // Variable created to hold total number of movies
    for (int i=0 ; i < Array_size ; i++) // For loop to reiterate for each student 
    {
        sum += Num[i]; // Variable to hold the number of total movies
    }
    return sum / Array_size ; // Return the average by dividing sum of all movies by the array size
} 

double medianNum(int Num[], const int Array_size) // Value returning function for median number of movies
{
    int *tempNum = new int[Array_size];
    for (int i = 0; i < Array_size; i++) {
    tempNum[i] = Num[i];
    }
    int startScan, minIndex; // Variable declaration for holding the starting index and the smallest index
    int minElem; // Variable declaration to hold the minimum element
    for (startScan = 0; startScan < (Array_size - 1); startScan++) // For loop to reiterate for each student in the array
    {
        minIndex = startScan; // Variable to hold the index of the smallest element of the array
        minElem = tempNum[startScan]; // Variable to hold the smallest element of the array

        for (int index = startScan + 1; index < Array_size; index++) // For loop to reiterate for each element in the array
        {
            if (tempNum[index] < minElem) // If function to determine if the element is smaller than the current element
            {
                minElem = tempNum[index]; // Statement to assign the new smaller element to minElem
                minIndex = index; // Statement to assign the new index of the new smaller element to minIndex
            }
        }
        tempNum[minIndex] = tempNum[startScan]; // Statement to assign the index of the smallest element as the comparison element for future iterations
        tempNum[startScan] = minElem; // Statement to assign the smallest element as the comparison element for future iterations

    }
    double median = 0.0; // Variable declaration for the median
    if (Array_size % 2 == 1) // If statement to run if median is odd
    {
        median = tempNum[(Array_size - 1) / 2]; // Statement to calculate the median of the array
    }
    else // Else statement to iterate if array is even
    {
        median = (tempNum[Array_size / 2] + tempNum[Array_size / 2 - 1]) / 2.0; // Statement to calculate the median of the array if the array is even
    }
    
    return median; 
    delete[] tempNum;
}
void totalMovie(int Num[], const int Array_size) // No value returning function
{
    cout << "Student total movie: " << endl;
    for (int i = 0; i < Array_size ; i++) // For loop to reiterate for each student
    {
        cout << "S" << i+1 << ": "; // Display for each student number
        for (int j = 0 ; j <Num[i]; j++)// For loop to reiterate for each movie for each student
        {
            cout << "*"; // Display of asterisk to indicate a movie watched
        }
        cout << endl;
    }
}
int main()
{
    int numStu; // Variable declaration for number of students
    cout << "Enter the number of students were surveyed: "; // Ask user for number of students surveyed
    cin >> numStu;
    while (numStu > 10 || numStu <= 0 ) // While loop for input validation 
    {
        cout << "Input validation. Please re-enter: "; // Ask user to reinput correct information
        cin >> numStu; // User reinput number of students
    }

    cout << "There are " << numStu << " numbers of students in this survey. \n" ; // Statement stating how many students are in the survey 
    int* stuNum = new int[numStu]; // Creation of array for number of students
    for(int i = 0 ; i < numStu ; i++) // For loop to reiterate how many movies each student watched
    {
        int numMovies; // Variable for Number of Movies
        cout << "Enter the number of movies that student number  " << i+1 << " watched: "; // Ask user for the number of movies that student watched
        cin >> numMovies; // User input for number of movies 
        stuNum[i] = numMovies; 
    }
        cout << "The average number of movies watched by " << numStu << " students is: " << averNum(stuNum, numStu) << endl; // Display statement for average number of movies watched by students
    cout << "The median number of movies watched by " << numStu <<" students is: " <<  medianNum(stuNum, numStu) << endl;
    totalMovie(stuNum, numStu);
    delete[]stuNum;
    return 0;
}
