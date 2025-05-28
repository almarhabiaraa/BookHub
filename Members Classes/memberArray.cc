#include <iostream>
#include "memberArray.h"

using namespace std;

memberArray::memberArray() { // default constructor
  size = 20;
  pos = 0;
}

void memberArray::addMember(ClubMember* cmem) { // add a member to the member array

  if (pos > size) // Return if the array if full
  {
    cout << "Sorry the Array is full!" << endl;
    return;
  }
  else {
    if (pos != 0) {
      bool check = false;

      for ( int i =0; i < pos; i++) {
        if (cmem -> lessThan(members[i])) {
          for ( int j = pos - 1; j >= i; j--)
          {
            members[j + 1] = members[j];
          }

          pos++;
          check = true;
          members[i] = cmem;
          break;
        }
      }
      if(!check)
        members[pos++] = cmem;
    }
    else
    {
      members[pos++] = cmem;
    }
  }
}

/* function to search the array to find the member with its number as
num parameter, and returns the corresponding member in the cmem parameter */
bool memberArray::findMember(int id, ClubMember** cmem) {

    if (pos != 0)
    {
      for (int i = 0; i < pos; i++)
      {
        if ( members[i] -> getId() == id)
        {
          *cmem = members[i];
          return true;
        }
      }
    }
    else
      cout << "List is empty.";
    return false;
  }

void memberArray::deleteMember(int id, ClubMember** cmem) { // delete a member from the array

  if (pos != 0) {
    for (int i = 0; i < pos; i++) {
      if (members[i] -> getId() == id) {

        for (int j = pos + 1; j >= 1; j--) {
          members[i] = members[i + 1];
        }
        pos--;
        break;
      }
    }
  }
  else
    cout << "No member is found with this ID."<< id << endl;
  }

void memberArray::printMembers() { // prints all the member information from the array

  for(int i = 0; i < pos; i++) {
    members[i] -> printMembers();
    cout << endl;
  }
}
