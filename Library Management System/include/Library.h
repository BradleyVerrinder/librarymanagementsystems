#define LIBRARY_H
#include <string>
#include <vector>
#include "Book.h"


class Library{
    private:
        // Creating a vector where each element is an instance of the "Book" class.
        std::vector<Book> books;


    public:
        //Add a new book
        void addBook(const Book& book);

        //View all books
        void viewBooks() const;

        //Borrow a book
        void borrowBook(int bookId);

        //Return a book
        void returnBook(int bookId);

        //Search for books by title
        void searchBooks(const std::string& title) const;

        //Save books to file
        void saveToFile(const std::string& filename) const;

        //Load books from file
        void loadFromFile(const std::string& filename);


};