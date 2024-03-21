#include <iostream>
using namespace std;
double averNum(int Num[], const int Array_size)
{
    double sum = 0;
    for (int i=0 ; i < Array_size ; i++)
    {
        sum += Num[i];
    }
    return sum / Array_size ;
} 
double medianNum ( int Num[], const int Array_size)
{
    double median = 0.0f;
    if (Array_size % 2 == 1)
    {
        median = Num[(Array_size - 1) / 2];
    }
    else
    {
        median = (Num[Array_size / 2 ] + Num[Array_size / 2 - 1]) / 2.0;
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
    while (numStu > 10 || numStu <= 0 )
    {
        cout << "Input validation. Please re-enter.";
        cin >> numStu;
    }
    const int SIZE = numStu;
    cout << "So there are " << SIZE << " numbers of students in this survey. \n" ;
    int stuNum[SIZE];
    for(int i = 0 ; i < SIZE ; i++)
    {
        int numMovies;
        cout << "Enter the number of movies that student number  " << i+1 << " watched: ";
        cin >> numMovies;
        stuNum[i] = numMovies; // store the array in a temp variable, check lab #5. 
    }
    cout << "The average number of movies watched by " << SIZE << " students is: " << averNum(stuNum, SIZE) << endl;
    cout << "The median number of movies watched by " << SIZE <<" students is: " << medianNum(stuNum, SIZE) << endl;
    cout << "Student total movie: " << endl;
    cout << totalMovie(stuNum, SIZE);
    return 0;
}
