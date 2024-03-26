#include <iostream>
using namespace std;
double averNum(int* Num[], int* Array_size)
{
    double sum = 0;
    for (int i=0 ; i < Array_size ; i++)
    {
        sum += Num[i];
    }
    return sum / Array_size ;
} 
double medianNum(int* Num[], const int Array_size)
{
    int startScan, minIndex;
    int minElem;
    for (startScan = 0; startScan < (Array_size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = Num[startScan];
        for (int index = startScan + 1; index < Array_size; index++)
        {
            if (Num[index] < minElem)
            {
                minElem = Num[index];
                minIndex = index;
            }
        }
        Num[minIndex] = Num[startScan];
        Num[startScan] = minElem;
    }
    double median = 0.0;
    if (Array_size % 2 == 1)
    {
        median = Num[(Array_size - 1) / 2];
    }
    else
    {
        median = (Num[Array_size / 2] + Num[Array_size / 2 - 1]) / 2.0;
    }
    return median;
}

int totalMovie(int Num[], const int Array_size)
{
    for (int i = 0; i < Array_size ; i++)
    {
        cout << "S" << i+1 << ": ";
        for (int j = 0 ; j <Num[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int numStu;
    cout << "Enter the number of students were surveyed: ";
    cin >> numStu;
    const int SIZE = numStu;
    cout << "There are " << SIZE << " numbers of students in this survey. \n" ;
    int stuNum[SIZE];
    for(int i = 0 ; i < SIZE ; i++)
    {
        int numMovies;
        cout << "Enter the number of movies that student number  " << i+1 << " watched: ";
        cin >> numMovies;
        stuNum[i] = numMovies; // store the array in a temp variable, check lab #5. 
    }
    cout << "The average number of movies watched by " << SIZE << " students is: " << averNum(&stuNum, &SIZE) << endl;
    cout << "The median number of movies watched by " << SIZE <<" students is: " << medianNum(&stuNum, &SIZE) << endl;
    cout << "Student total movie: " << endl;
    cout << totalMovie(stuNum, SIZE);
    return 0;
}
