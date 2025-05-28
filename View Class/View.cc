#include <iostream>
using namespace std;
#include <string>

#include "View.h"

void View::showMenu(int& choice)
{
  cout << endl << endl;
  cout << "What would you like to do:"<< endl;
  cout << "  (1) Print books" << endl;
  cout << "  (2) Print members" << endl;
  cout << "  (3) Rate a book" << endl;
  cout << "  (4) Print All books rated by members" << endl;
  cout << "  (5) Print best book rated by members" << endl;
  cout << "  (6) Print The most rated book by members" << endl;
  cout << "  (0) Exit" << endl<<endl;

  cout << "Enter your selection: ";
  cin >> choice;
  cout << endl;

  if (choice == 0)
    return;

  while (choice < 1 || choice > 6) {
    cout << "Enter your selection: ";
    cin >> choice;
  }

}

void View::printStr(string str)
{
  cout << str;
}

void View::readInt(int& n)
{
  cin >> n;
}

void View::readStr(string& str)
{
  cin >> str;
}
