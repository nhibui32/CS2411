#include <iostream>
using namespace std;
double averNum(int Num[], int Array_size)
{
    double sum =0;
    for (int i=0 ; i < Array_size ; i++)
    {
        sum += Num[i];
    }
    return sum;
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
        cout << "The numbers of movie that student number " << i+1 << " watch is:";
        cin >> numMovies;
    }
    cout << "the average of movies of " << SIZE << " students is: ";
    cout << averNum(stuNum, SIZE);
    return 0;
}