// main

#include "Contact.hpp"
#include "Phonebook.hpp"

int main(){

   Contact x("Daniel", "Berger", 123456789);
   Contact y("Nelly", "Berger", 12121212);
   Contact z("Ernest", "Berger", 989434);
   x.displayContact();
   y.displayContact();
   z.displayContact();

   Phonebook one;
   one.addContact(x);
   one.addContact(y);
   one.addContact(z);

}
