// Phonebook header file


#ifndef Phonebook_hpp
#define Phonebook_hpp

#include "Contact.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Phonebook : public Contact {
private:
   vector<Contact> contacts;

public:
   Phonebook();
   bool addContact(Contact person);
   bool modifyContact();
   bool removeContact();
   bool findContact();
   void showAll();


};

#endif
