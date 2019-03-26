// Created by Daniel Berger

#include "Contact.hpp"

Contact::Contact(){
}

Contact::Contact(string First, string Last, int Number){
   first = First;
   last = Last;
   number = Number;
}

void Contact::addFirst(string First) {
   first = First;

}

void Contact::addLast(string Last) {
   last = Last;
}

void Contact::addNumber(int Number) {
   number = Number;
}

void Contact::displayContact(){
   cout << "First Name : " << first << endl;
   cout << "Last Name : " << last << endl;
   cout << "Phone Number : " << number << endl;
}
