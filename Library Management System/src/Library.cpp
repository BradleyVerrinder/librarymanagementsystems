#include "../include/Library.h"
#include <fstream>
#include <iostream>

//Add a new book
void Library::addBook(const Book& book){
    books.push_back(book);
    std::cout << "Book added successfully!" << std::endl;
}

//View all books
void Library::viewBooks() const{
    for (const auto& book : books){
        book.displayBookInfo();
    }
}

//Borrow a book
void Library::borrowBook(int bookId) {
    for (auto& book : books){
        if (book.getId() == bookId){
            book.setIsAvailable(false);
            std::cout << "Book borrowed successfully." << std::endl;
            return;
        }
    }
}

//Return a book
void Library::returnBook(int bookId){
    for (auto& book : books){
        if (book.getId() == bookId && !book.getIsAvailable()){
            book.setIsAvailable(true);
            std::cout << "Book returned successfully." << std::endl;
            return;
        }
    }
    std::cout << "Book not found or already returned." << std::endl;
}

//Search for book by title
void Library::searchBooks(const std::string& title) const{
    for (const auto& book : books){
        if (book.getTitle().find(title) != std::string::npos){
            book.displayBookInfo();
            return;
        }
    }
    std::cout << "Book not found!" << std::endl;
}

//Load books to file
void Library::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    int id;
    std::string title, author, available;
    while (inFile >> id && std::getline(inFile, title, ',')
           && std::getline(inFile, author, ',')
           && std::getline(inFile, available)) {
        books.push_back(Book(id, title, author));
        books.back().setIsAvailable(available == "1");
    }
}
