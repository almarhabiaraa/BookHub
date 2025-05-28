#include "Rating.h"

// constructor
Rating::Rating(Book** b, ClubMember** cmem, int r) {
  rBook = *b;
  rMember = *cmem;
  rating = r;
}

// setting the rating
void Rating::setRating(int r) {
  rating = r;
}

//get functions
Book* Rating::getBook() {
  return rBook;
}

ClubMember* Rating::getClubMember() {
  return rMember;
}

int Rating::getRating() { // get rating function that will be used in the BookClub class
  return rating;
}

void Rating::printRating() { // printing the rating information

  cout << "Book name: " << rBook -> getTitle() << endl;
  cout << "Club member name: " << rMember -> getFirstName();
  cout << " " << rMember -> getLastName() << endl;
  cout << "Rating: " << rating << "/10\n" << endl;
}
