#include <iostream>
using namespace std;
void averNum(int Num[], const int Array_size)
{
    double sum = 0;
    for (int i=0 ; i < Array_size ; i++)
    {
        sum += Num[i];
    }
    cout << "The average number of movies watched by " << Array_size << " students is: " <<  sum / Array_size << endl ;
} 

double medianNum(int Num[], const int Array_size)
{
    int *tempNum = new int[Array_size];
    for (int i = 0; i < Array_size; i++) {
    tempNum[i] = Num[i];
    }
    int startScan, minIndex;
    int minElem;
    for (startScan = 0; startScan < (Array_size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = tempNum[startScan];
        for (int index = startScan + 1; index < Array_size; index++)
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
    if (Array_size % 2 == 1)
    {
        median = tempNum[(Array_size - 1) / 2];
    }
    else
    {
        median = (tempNum[Array_size / 2] + tempNum[Array_size / 2 - 1]) / 2.0;
    }
    
    return median; 
    delete[] tempNum;
}
void totalMovie(int Num[], const int Array_size)
{
    cout << "Student total movie: " << endl;
    for (int i = 0; i < Array_size ; i++)
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
    while (numStu > 10 || numStu <= 0 )
    {
        cout << "Input validation. Please re-enter: ";
        cin >> numStu;
    }
    const int SIZE = numStu;
    cout << "There are " << SIZE << " numbers of students in this survey. \n" ;
    int stuNum[SIZE];
    for(int i = 0 ; i < SIZE ; i++)
    {
        int numMovies;
        cout << "Enter the number of movies that student number  " << i+1 << " watched: ";
        cin >> numMovies;
        stuNum[i] = numMovies;
    }
    averNum(stuNum, SIZE);
    cout << "The median number of movies watched by " << SIZE <<" students is: " <<  medianNum(stuNum, SIZE) << endl;
    totalMovie(stuNum, SIZE);
    return 0;
}