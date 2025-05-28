#ifndef CLUBMEMBER_H
#define CLUBMEMBER_H
#include <string>
using namespace std ;

class ClubMember
{
  //methods
  public:
  
    ClubMember(); //default constructors to initialize values
    ClubMember(int, string, string); //overload constructors to initialize values
  
    //setter functions
    void setFirstName(string);
    void setLastName(string);
    void setID(int);
    void setData(int,string,string);

    //getter functions
    string getFirstName();
    string getLastName();
    int getId();

    bool lessThan(ClubMember *otherName); //function to compare names
    //void addBookRated(Book*);

    void printMembers(); //display function

  //attributes
  private:
    int id; //members id
    string firstName; //members first name
    string lastName; //members last name
};
#endif
