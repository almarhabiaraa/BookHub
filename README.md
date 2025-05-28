# BookHub: Book Club Management System

- Course: Advanced Programming (CS1131)
- Language: C++
- Team Members: Araa, Lama, Dana, Ghayah

## Introduction
BookHub is a console-based Book Club Management System developed as a course project for Advanced Programming (CS1131). The system helps manage books, club members, and their ratings. Members can interact with the system to browse, rate, and manage their book collection, providing a hands-on application of object-oriented programming principles in C++.

## Repository Structure
```bash

├── Book Classes/ # Manages book-related functionality
├── Members Classes/ # Handles club members and their data
├── Rating Class/ # Stores and manages book ratings
├── BookClub Class/ # Central logic tying members and books together
├── View Class/ # User interface and input handling
├── Control Class/ # Coordinates program control flow
├── Project Test Driver/ # Main program execution and testing
└── Makefile/ # Compilation instructions
```

## Features
- Add, search, delete, and display books
- Add, search, delete, and display members
- Alphabetical sorting of books
- Book rating system
- Dynamic memory management with arrays of pointers
- Text-based menu-driven interface

## Code Overview
### Book Classes/
1. Book Class:
- Stores individual book data: ID, title, author, and publication year.

2. BookArray Class:
- Allows adding, searching (by ID), deleting, and displaying all books. Also includes sorting books alphabetically.

### Members Classes/
1. ClubMember Class:
- Holds member information: ID, first name, and last name.

2. MemberArray Class:
- Supports adding, searching, deleting, and displaying member details.

### Rating Class/
- Stores ratings assigned by members to books.
- Provides functionality to print or retrieve rating data.

### BookClub Class/
- Uses a dynamic array of member pointers.
- Represents the club by connecting books and members through relationships.

### View Class/
- Displays a menu-driven interface.
- Takes user input and passes control to relevant components based on selections.

### Control Class/
- Acts as the coordinator for the entire system.
- Initializes book and member lists, manages user input and application flow.

### Project Test Driver/
- Contains the main() function and test cases.
- Used to demonstrate and validate the functionality of the system.

## How to Compile and Run
1. Ensure you have a C++ compiler installed.
2. Use the provided Makefile:
```bash
make
./BookHub
```
## Conclusion & Reflections
This project was a significant learning experience. While implementing features, we encountered challenges—especially with pointers and dynamic arrays. It required revisiting the project brief multiple times, consulting textbooks, and seeking help from peers. Although Makefile issues forced us to run the program on OnlineGDB, we were proud to overcome our hurdles and complete the system successfully. This project reinforced our understanding of C++ object-oriented programming and memory management.

## Contributors
1. Araa Almarhabi
2. Dana Alaulaqi
3. Lama Hedhaa
4. Ghayah Krimly
