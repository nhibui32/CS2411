// This program demonstrates a destructor.
#include <iostream>
using namespace std;

class Demo
{

public:
   Demo();     // Constructor
   ~Demo();    // Destructor
   //int i;
    
};

Demo::Demo() // constructor: name of the function is the name of the class.
//create the  objetc like new.
{
   cout << "Welcome to the constructor!\n";
   cout << this;
}

Demo::~Demo() //~ is the sign of destructor. it means you are about the destroy the object.
// destroy the object like delete
{
   cout << "The destructor is now running.\n";
   cout << this;
   //demoObject 
}
int main()
{
   Demo demoObject;  // Define a demo object;
   Demo demoObject2;

   cout << "This program demonstrates an object\n";
   cout << "with a constructor and destructor.\n";
   return 0;
}

// when the program runs, line 30 will do to line 13, - 17 - 18
//line 31 will do to line 13, - 17 - 18
// which object created first will be destroy last.
