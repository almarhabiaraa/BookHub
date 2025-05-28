#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

//Book class
class Book
{
  //methods
  public:
    void print(); //the function that displays the books

    void setBookId(int); //setter function for ID
    void setBookTitle(string); //setter function for Title
    void setBookAuthor(string); //setter function for Author
    void setBookYear(int); //setter function for Year
	
	
    int getId(); //getter id
    string getTitle(); //getter title
    string getAuthor(); //getter author
    int getYear(); //getter published year

    Book(); //default constructor 
    Book(int, string, string, int); //overloaded constructor that takes parameters

    bool lessThan(Book*); /* function compares the book on the left-hand side
    with the book passed in as the parameter; a student is considered “less than” otherStudent
    if their name comes first in alphabetical order */

  //attributes
  private:
    int id; // unique id for each book
    string title; // title of each book
    string author; // author's name of each book
    int year; // year published for each book
};
#endif
