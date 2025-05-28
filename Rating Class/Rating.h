#ifndef RATING_H
#define RATING_H

#include "Book.h"
#include "ClubMember.h"

class Rating
{
  public:

    Rating(Book**, ClubMember**, int); // overloaded constructor
    void printRating(); // function will print the ratings

    // setter function
    void setRating(int);

    // getter functions
    ClubMember* getClubMember();
    Book* getBook();
    int getRating();

  private:

    int rating; // variable that will store the ratings
    Book* rBook; // object from the book class
    ClubMember* rMember; // object from the club member class

};
#endif
