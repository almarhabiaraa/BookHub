#include <iostream>
using namespace std;
#include <string>
#include "Control.h"

Control::Control() { // default constructor
}

void Control::launch() {
  BookClub* effatClub = new BookClub("Effat University");
  initBooks(effatClub);
  initMembers(effatClub);
  initRatings(effatClub);
  int bookId, memberId, r;

  int choice = 0;

  while (1) {
    view.showMenu(choice); /*the View object to display the main menu and read
		the user’s selection, until the user exits*/
    if (choice == 0)
      break;

    switch(choice) {

      case 1:
      effatClub -> printBooks(); // printing out all books
      break;

      case 2:
      effatClub -> printMembers(); // printing out all members
      break;

      case 3: // ask the user to enter the rating information
      cout << "Please enter your data to add a rating: \n" << endl;

      view.printStr("Please enter the Book ID: ");
      view.readInt(bookId);

      view.printStr("Please enter your ID: ");
      view.readInt(memberId);

      view.printStr("Please enter your rating: ");
      view.readInt(r);

      effatClub -> addRating(bookId, memberId, r); // adds the users rating and stores it in the ratings collection
      break;

      case 4:
      effatClub -> printRatings(); // prints all the ratings
      break;

      case 5:
      effatClub -> bestRated(); // prints the best rated book
      break;

      case 6:
      effatClub -> mostOccuredId(); // prints the books with the most ratings
      break;

    }
  }
}

void Control::initBooks(BookClub* bclub) { // books
  cout << "\nInitializing the books data...." << endl;
  bclub -> addBook(new Book(1001, "Harry Potter and the Sorcerer's Stone", "J.K. Rowling", 1997));
  bclub -> addBook(new Book(1002, "Hunger Games", "Suzanne Collins", 2008));
  bclub -> addBook(new Book(1003, "The Fault in Our Stars", "John Green", 2012));
  bclub -> addBook(new Book(1004, "Little Women", "Louisa May Alcott", 1832));
  bclub -> addBook(new Book(1005, "It Ends With Us", "Colleen Hoover", 2016));
  bclub -> addBook(new Book(1006, "The Tell-Tale Heart", "Edgar Allan Poe", 1843));
  bclub -> addBook(new Book(1007, "The Fall of the House of Usher", "Edgar Allan Poe", 1839));
  bclub -> addBook(new Book(1008, "Paper Towns", "John Green", 2008));
  bclub -> addBook(new Book(1009, "Angela’s Ashes", "Frank McCourt", 1996));
  bclub -> addBook(new Book(1010, "Between the World and Me", "Ta-Nehisi Coates", 1951));
}

void Control::initMembers(BookClub* bclub) { // members in the club
  cout << "Initializing the members data...." << endl;
  bclub -> addMember(new ClubMember(101, "Araa", "Almarhabi"));
  bclub -> addMember(new ClubMember(102, "Dana", "Alaulaqi"));
  bclub -> addMember(new ClubMember(103, "Lama", "Hedhaa"));
  bclub -> addMember(new ClubMember(104, "Ghayah", "Krimly"));
  bclub -> addMember(new ClubMember(105, "Akila", "Sarirete"));

}

void Control::initRatings(BookClub* bclub) { // rated books
  cout << "Initializing the ratings data...." << endl;
  bclub -> addRating(1001, 101, 8);
  bclub -> addRating(1006, 105, 8);
  bclub -> addRating(1002, 104, 8);
  bclub -> addRating(1005, 102, 7);
  bclub -> addRating(1002, 101, 10);
  bclub -> addRating(1007, 101, 7);
  bclub -> addRating(1006, 104, 8);
  bclub -> addRating(1006, 101, 9);
  bclub -> addRating(1003, 102, 6);
  bclub -> addRating(1006, 103, 3);
  bclub -> addRating(1005, 105, 7);
  bclub -> addRating(1009, 102, 9);
  bclub -> addRating(1010, 105, 7);
  bclub -> addRating(1007, 102, 8);
  bclub -> addRating(1010, 102, 5);
  bclub -> addRating(1002, 103, 9);
  bclub -> addRating(1008, 101, 8);
  bclub -> addRating(1004, 103, 6);
  bclub -> addRating(1002, 105, 9);
  bclub -> addRating(1010, 103, 5);
  bclub -> addRating(1001, 104, 3);
  bclub -> addRating(1007, 104, 7);
  bclub -> addRating(1004, 101, 4);
  bclub -> addRating(1008, 104, 4);
  bclub -> addRating(1007, 105, 8);
}