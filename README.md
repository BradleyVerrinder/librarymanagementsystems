# 📚 Library Management System

This is a simple **Library Management System** written in C++ that allows users to manage books in a library. Users can add, view, borrow, return, and search books using an interactive menu-based system.

## ✨ Features

- **Add Book**: Add a new book to the library with book ID, title, and author.
- **View Books**: View all the books in the library with details (ID, title, author, availability).
- **Borrow Book**: Borrow a book by providing its ID. Marks the book as unavailable.
- **Return Book**: Return a borrowed book and mark it as available again.
- **Search Books**: Search for books by title.
- **Save and Exit**: Save the library data to a file and exit the program.

## 🔧 Dependencies

To build and run the Library Management System, you will need the following:

### 1. 🛠 C++ Compiler
You will need a C++ compiler to compile and run the program.

- **Windows**: MinGW or MSVC
- **Linux**: GCC
- **Mac**: Xcode Command Line Tools (including `clang++`)

You can download MinGW for Windows [here](https://sourceforge.net/projects/mingw/).

## 🚀 How to Build and Run

### 1. Clone the Repository

Clone the repository to your local machine:

```bash
git clone https://github.com/yourusername/library-management-system.git
cd library-management-system

g++ -std=c++11 -Iinclude -o main.exe src/main.cpp src/Library.cpp src/Book.cpp

main.exe
