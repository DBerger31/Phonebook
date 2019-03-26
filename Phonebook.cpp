
#include "Phonebook.hpp"
#include <iostream>
using namespace std;


Phonebook::Phonebook(){
}

/*
Will return true when sucessfully added contact
FALSE if out of scope
or contact already exists
*/
bool Phonebook::addContact(Contact person){
   // Need to figure out how to check if contact exists
   /*for (unsigned int i = 0; i < contacts.size(); i++){
      if (contacts[i] == person){
         cout << "Contact already exists";
         return false;
      }
   }*/
   contacts.push_back(person);
   //id_++;
   return true;
}


/*
bool Phonebook::modifyContact(Contact person){
   bool found = false;
   int id;
   string first_x;
   string last_x;
   int number_x;
   for (int i = 0; i < contacts.size(); i++){
      if (contacts[i] == person){
         found = true;
         id = i;
         break;
      }
   }
   cout << "Enter first name : " << endl;
   cin >> first_x;
   cout << "Enter last name: " << endl;
   cin >> last_x;
   cout << "Enter number: " << endl;
   cin >> number_x;

   Contact x(first_x, last_x, number_x );
   contacts[i] = x;

}*/



void Phonebook::showAll(){
   for (unsigned int i = 0; i < contacts.size() - 1; i++){
      cout << contacts[i]->displayContact() << endl;
   }
}
