/*
Homework: 3
Team: 7
Team Members:
    - Member - Collin Mendoza: 33.3%
    - Member - Zaria Richards: 33.3%
    - Member - Ngoc Anh Nhi Bui: 33.3%

*/
#include <iostream>
using namespace std;
void averNum(int* Num, const int * Array_size)
{
    double sum = 0;
    for (int i=0 ; i < *Array_size ; i++)
    {
        sum += Num[i];
    }
    cout << "The average number of movies watched by " << *Array_size << " students is: " <<  sum / *Array_size << endl ;
} 

double medianNum(int* Num, const int * Array_size)
{
    int *tempNum = new int[*Array_size];
    for (int i = 0; i < *Array_size; i++) {
    tempNum[i] = Num[i];
    }
    int startScan, minIndex;
    int minElem;
    for (startScan = 0; startScan < (*Array_size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = tempNum[startScan];
        for (int index = startScan + 1; index < *Array_size; index++)
        {
            if (tempNum[index] < minElem)
            {
                minElem = tempNum[index];
                minIndex = index;
            }
        }
        tempNum[minIndex] = tempNum[startScan];
        tempNum[startScan] = minElem;
    }
    double median = 0.0;
    if (*Array_size % 2 == 1)
    {
        median = tempNum[(*Array_size - 1) / 2];
    }
    else
    {
        median = (tempNum[*Array_size / 2] + tempNum[*Array_size / 2 - 1]) / 2.0;
    }
    
    return median; 
    delete[] tempNum;
}
void totalMovie(int* Num, const int *Array_size)
{
    cout << "Student total movie: " << endl;
    for (int i = 0; i < *Array_size ; i++)
    {
        cout << "S" << i+1 << ": ";
        for (int j = 0 ; j <Num[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int numStu;
    cout << "Enter the number of students were surveyed: ";
    cin >> numStu;
    cout << "There are " << numStu << " numbers of students in this survey. \n" ;
    int* stuNum = new int[numStu];
    for(int i = 0 ; i < numStu ; i++)
    {
        int numMovies;
        cout << "Enter the number of movies that student number  " << i+1 << " watched: ";
        cin >> numMovies;
        stuNum[i] = numMovies;
    }
    averNum(stuNum, &numStu);
    cout << "The median number of movies watched by " << numStu <<" students is: " <<  medianNum(stuNum, &numStu) << endl;
    totalMovie(stuNum, &numStu);
    delete[]stuNum;
    return 0;
}
