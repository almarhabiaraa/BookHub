#ifndef BOOKARRAY_H
#define BOOKARRAY_H

#include "Book.h"
//BookArray class
class bookArray {

  //methods
  public:
  
    bookArray(); //default constructor
    ~bookArray(); // destructor

    void addBook(Book*); //function that adds Books
    bool findBook(int, Book**); //function that finds Books
    void deleteBook(int); //function that deltes Books

    void printBooks();
	
  //attributes
  private:
  
    int size; //size of the collection
    int pos; //index in the array
    Book** bookArr; //books array

};
#endif
