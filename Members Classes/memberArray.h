#ifndef MEMBERARRAY_H
#define MEMBERARRAY_H

#include "ClubMember.h"

class memberArray
{
  public:
   memberArray(); // default constructor

  void printMembers();

  void addMember(ClubMember*); // take a member pointer as parameter
  void deleteMember(int, ClubMember**); // function that deletes a member
  bool findMember(int, ClubMember**); // function to search the array to find the member


  private:
    int pos; // index in the array
    int size; // size of the array
    ClubMember* members[10]; // members array
};
#endif
