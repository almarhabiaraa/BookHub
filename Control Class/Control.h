#ifndef CONTROL_H
#define CONTROL_H

#include "BookClub.h"
#include "View.h"

//Control class that controls the classes and initializes books and members in the BookClub, and allows user to do inputs from there to print or whatever.
class Control
{
  public:
  	Control(); // default constructor
  	void launch();
  	void initBooks(BookClub* bclub); // function that initializes the books in the books class
  	void initMembers(BookClub* bclub); // function that initializes the members in the clubMembers class
    void initRatings(BookClub* bclub); // function that initializes ratings

  private:
  	View view; // the View object that will be responsible for most user I/O
};
#endif
