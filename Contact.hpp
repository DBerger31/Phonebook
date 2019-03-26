// Daniel Berger

#ifndef Contact_hpp
#define Contact_hpp

#include <iostream> // DO NOT NEED TO INCLUDE THESE LIBS IN CPP OR MAIN
#include <string>
#include <cstdlib>

using namespace std;

class Contact {
protected:
   string first; // first Name
   string last; // last Name
   int number; // phone number

public:
   Contact(); // defualt constructor
   Contact(string First, string Last, int Number); // parameter constructor
   void addFirst(string First); // adds first name to contact
   void addLast(string Last);
   void addNumber(int Number);

   void displayContact();


};

#endif
