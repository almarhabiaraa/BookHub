#include <iostream>
#include <string>
#include "BookClub.h"

using namespace std;

// overloaded constructors
BookClub::BookClub(string clubName) {
  name = clubName;
  numRatings = 30;
  pos = 0;
  ratingArr = new Rating*[numRatings];
}

// setters
void BookClub::setClubName(string n) {
  name = n;
}

void BookClub::setNumRatings(int r) {
  numRatings = r;
}

// getters
string BookClub::getClubName() {
  return name;
}

int BookClub::getNumRatings() {
  return numRatings;
}

void BookClub::printBooks() { // printing the books from the Book collection
  books.printBooks();
}

void BookClub::printMembers() { // prints all members from the member collection
  members.printMembers();
}

void BookClub::printRatings() { // printing the ratings from the Rating collection
  if (pos != 0) {
    for (int i = 0; i < pos; i++) {
      ratingArr[i] -> printRating();
    }
  }
  else
    cout << "There is no rated books yet!\n" << endl;
}

void BookClub::mostOccuredId() {

  Rating* maxOccurred;
  maxOccurred = ratingArr[0];
  int maxCount = 0;


    for (int i = 0; i < pos; i++) {
      int count = 1;
      for (int j = i + 1; j < pos; j++) {

        if (ratingArr[i] -> getBook() -> getId() == ratingArr[j] -> getBook() -> getId()) {
          count ++;
        }
        if (count > maxCount) {
          maxCount = count;
        }
      }
      if (count == maxCount) {
        maxOccurred = ratingArr[i];
      }
  }
  cout << "Most occurred book is: " << endl;
  maxOccurred -> getBook() -> print();
}

void BookClub::bestRated() { // returns the highest rated book
    Rating* max;
    max = ratingArr[0];
    for (int i = 1; i < pos; i++) {
      if (ratingArr[i] -> getRating() > max -> getRating()) {
        max = ratingArr[i];
      }

    }
    cout << "The best rated Book is \n" << endl;
    max -> printRating();
}

void BookClub::addBook(Book* b) { // function that adds a given book to the book collection
  books.addBook(b);
}

void BookClub::addMember(ClubMember* cmem) { // function that adds a given member to the members collection
  members.addMember(cmem);
}

void BookClub::removeMember(int id) { // removes a member from the list
  ClubMember** cmem = new ClubMember*();
  members.deleteMember(id, cmem);
}

void BookClub::removeBooks(int id) { // remove a book from the list
  Book** b = new Book*();
  books.deleteBook(id);
}


void BookClub::addRating(int bookId, int memberId, int r) { // function that adds a given rating to the ratings collection
  Book** b = new Book*();

  if (books.findBook(bookId, b)) { // finding the book by the given book id
    ClubMember** cm = new ClubMember*();

    if (members.findMember(memberId, cm)) { // finding the member by the given member id
      ratingArr[pos++] = new Rating(b, cm, r);
    }
    else {
      cout << "Club member is not found.";
    }
  }
  else {
    cout << "Book ID is not found.";
    }
}

void BookClub::printRatingsOfBooks(int book_id) { // function that prints the all the ratings
  if (pos != 0) {
    for (int i = 0; i < numRatings; i++) {
      ratingArr[i] -> printRating();
    }
  }
  else
  {
    cout << "There are no ratings.";
  }
}
