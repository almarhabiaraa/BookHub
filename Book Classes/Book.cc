#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

void Book::print() { //the function that displays the books

  cout << "---------------------- Book -----------------------" << endl;
  cout << "Book ID: " << id << endl;
  cout << "Book Title: " << title << endl;
  cout << "Book Author: " << author << endl;
  cout << "Year Published: " << year << endl;
  cout << "-----------------------------------------------------" << endl;
  cout << endl;

}

void Book::setBookId(int bookId) { //setting the id
  id = bookId;
}

void Book::setBookTitle(string bookTitle) { //setting the book title
    title = bookTitle;
}

void Book::setBookAuthor(string bookAuthor) { //setting the book's author
  author = bookAuthor;
}

void Book::setBookYear(int bookYear) { //setting the book year published
  year = bookYear;
}

int Book::getId() {
  return id; //getter id
}

string Book::getTitle() {
  return title; //getter titlle
}

string Book::getAuthor() {
  return author;  //getter author
}

int Book::getYear() {
   return year;  //getter published year
}

Book::Book() { //default constructor initializing values
  id = -1;
  title = "";
  author = "";
  year = -1;
}
// overloaded constructor
Book::Book(int bookId, string bookTitle, string bookAuthor, int bookYear) {
  id = bookId;
  title = bookTitle;
  author = bookAuthor;
  year = bookYear;
}

bool Book::lessThan(Book* otherBook) { // returns the book less than alphabetically
  if (title < otherBook -> title)
    return true;
  else
    return false;
}
