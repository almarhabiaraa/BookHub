#include <iostream>
#include <iomanip>
using namespace std;

#include "bookArray.h"

bookArray::bookArray() { //default constructor initializes the size, pos, and book Array
  size = 20;
  pos = 0;
  bookArr = new Book*[size];
}

void bookArray::addBook(Book* b) { //adds a book to the book array
  if (pos < size)
  {
    if (pos != 0)
    {
      bool check = false;
      for ( int i = 0; i < pos; i++)
      {
        if(b -> lessThan(bookArr[i]))
        {
          for (int j = pos-1; j >= i; j--)
          {
            bookArr[j+1] = bookArr[j];
          }
          pos++;
          check = true;
          bookArr[i] = b;
          break;
        }
      }
      if(!check)
        bookArr[pos++] = b;
    }
    else
    {
      bookArr[pos++] = b;
    }
  }
  else
    cout << "Sorry, the list is full." << endl;
}

/* function to search the array to find the book with its id as
num parameter, and returns the corresponding book in the b parameter */
bool bookArray::findBook(int num, Book** b) { // function that will find the book by the id
  if (pos != 0)
  {
    for (int i = 0; i < pos; i++)
    {
      if ( bookArr[i] -> getId() == num)
      {
        *b = bookArr[i];
        return true;
      }
    }
  }
  else
    cout << "No Books are available in the list.";
  return false;
}

void bookArray::deleteBook(int id) { //deletes a book when used
  if (pos != 0)
  {
    for (int i = 0; i < pos; i++)
    {
      if (bookArr[i]->getId() == id)
        {
          for (int j = pos+1; j>=i; j--)
          {
            bookArr[i] = bookArr[i+1];
          }
          pos--;
          break;
        }
    }
  }
  else
    cout << "No Book is not found with this ID."<< id << endl;
}

void bookArray::printBooks() { //prints the books information

  if (pos != 0)
  {

    for (int i = 0; i < pos; i++)
    {
      cout << "Book " << setw(2) << (i + 1) << endl;
      bookArr[i] -> print();
    }
  }
  else
    cout << "Book list is empty.";
}

bookArray::~bookArray() { //destructor
  for ( int i = 0; i < size; i++) {
     delete bookArr[i];
  }
  delete [] bookArr;
}
