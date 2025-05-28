#include <iostream>
#include "ClubMember.h"
#include <string>
using namespace std;

//set functions definitions
void ClubMember::setFirstName(string fname) {
  firstName = fname;
}

void ClubMember::setLastName(string lname) {
  lastName = lname;
}

void ClubMember::setID(int i) {
  id = i;
}

//get functions definitions
string ClubMember::getFirstName() {
  return firstName;
}

string ClubMember::getLastName() {
  return lastName;
}

int ClubMember::getId() {
  return id;
}

ClubMember::ClubMember() {
  id = 0;
  firstName = "";
  lastName = "";
}

ClubMember::ClubMember(int i, string fname, string lname) { // overloaded constructor
  id = i;
  firstName = fname;
  lastName = lname;
}

bool ClubMember::lessThan(ClubMember* otherName) { // comparing the books and displays them in order
  if (firstName < otherName -> firstName && lastName < otherName -> lastName)
    return true;
  else
    return false;
}

/*
void ClubMember::addBookRated(Book* ) {

}
*/
void ClubMember::printMembers() {
  cout << "\n--------------- Members ----------------------";
  cout << "\nMember ID: " << id << endl;
  cout << "Member first name: " << firstName << endl;
  cout << "Member last name: " << lastName << endl;
  cout << id << " " << firstName << " " << lastName << endl;
  cout << "----------------------------------------------" << endl;
}
