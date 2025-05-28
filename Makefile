TARGETS	=		project

all:		$(TARGETS)

project:		TestDriver.o  Book.o ClubMember.o Rating.o bookArray.o memberArray.o BookClub.o Control.o View.o
	g++ -o		project		TestDriver.o		Book.o ClubMember.o Rating.o bookArray.o memberArray.o BookClub.o Control.o View.o

TestDriver.o:		TestDriver.cc		Book.h ClubMember.h  Rating.h bookArray.h memberArray.h BookClub.h Control.h View.h
	g++ -c TestDriver.cc

Book.o:		Book.cc	Book.h
	g++ -c Book.cc

ClubMember.o:		ClubMember.cc		ClubMember.h
	g++ -c ClubMember.cc

bookArray.o:		bookArray.cc		bookArray.h
	g++ -c bookArray.cc

memberArray.o:		memberArray.cc		memberArray.h
	g++ -c memberArray.cc

Rating.o:		Rating.cc		Rating.h
	g++ -c Rating.cc

BookClub.o:		BookClub.cc		BookClub.h
	g++ -c BookClub.cc

Control.o:		Control.cc		Control.h
	g++ -c Control.cc

View.o:		View.cc		View.h
	g++ -c View.cc

clean:$
	rm -f *.o project
