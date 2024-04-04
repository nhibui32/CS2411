// This program demonstrates a constructor.
#include <iostream>
using namespace std;

// Demo class declaration.

class Demo
{
public:
   Demo();     // Constructor
};

Demo::Demo() // The name of the funcrion is the same name of the class.
//constructur has no return type

{
   cout << "Welcome to the constructor!\n";
}

//*****************************************
// Function main.                         *
//*****************************************

int main()
{
   Demo demoObject;  // Define a Demo object;
    // when the object is created inside the demo . line 26 will call line 13 and then continue  at line 29.

   cout << "This program demonstrates an object\n";
   cout << "with a constructor.\n";
   return 0;
} 
