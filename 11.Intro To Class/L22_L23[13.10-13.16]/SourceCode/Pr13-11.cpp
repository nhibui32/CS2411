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

Demo::Demo()
{
   cout << "Welcome to the constructor!\n";
   cout << this;
}

Demo::~Demo()
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