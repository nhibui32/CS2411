#include <iostream>
using namespace std;
double averNum(const int Num[], int Array_size)
{
    double sum = 0;
    for (int i=0 ; i < Array_size ; i++)
    {
        sum += Num[i];
    }
    return sum / Array_size ;
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
    cout << "The average number of movies watched by " << SIZE << " students is: " << averNum(stuNum, SIZE) ;

    return 0;
}
