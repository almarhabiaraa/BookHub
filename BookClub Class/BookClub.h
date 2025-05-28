#ifndef BOOKCLUB_H
#define BOOKCLUB_H

#include <string>

#include "Book.h"
#include "ClubMember.h"
#include "Rating.h"
#include "memberArray.h"
#include "bookArray.h"

class BookClub
{
  public:
    BookClub(string); // overloaded constructor
    //BookClub(string); // overloaded constructor
    //~BookClub(); // destructor

    void mostOccuredId();
    void bestRated();
    void printRatingsOfBooks(int);

    //get functions
    string getClubName();
    int getNumRatings();

    // set Functions
    void setClubName(string);
    void setNumRatings(int);

    void print(); // printing function

    void addBook(Book*); // Function that adds a book to the book collection
    void addMember(ClubMember*); // function that adds a member to the member collection
    void addRating(int bookId, int memberId, int r); // function that adds a rating

    void printRatings(); // function that prints all ratings
    void printMembers(); // function that prints all members
    void printBooks(); // function that prints all books

    void removeBooks(int); // Function that removes a book
    void removeMember(int); // Function that removes a member

  private:
    string name; // Book Club name
    int numRatings; // book rating
    int rating;
    int pos; // index position
    memberArray members; // members in the array collection
    bookArray books; // books in the array collection
    Rating** ratingArr; // rating array 
};
#endif
