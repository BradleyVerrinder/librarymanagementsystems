#include "Book.h"
#include <fstream>
#include <iostream>

//Constructor
Book::Book(int bookId, const std::string& bookTitle, const std::string& bookAuthor): id(bookId), title(bookTitle), author(bookAuthor), isAvailable(true){}

//Getters
int Book::getId() const {
    return id;
}

std::string Book::getTitle() const{
    return title;
}

std::string Book::getAuthor() const{
    return author;
}

bool Book::getIsAvailable() const{
    return isAvailable;
}

//Setters
void Book::setIsAvailable(bool availability){
    isAvailable = availability;
}

void Book::displayBookInfo() const{
    std::cout << "ID: " << id << ", Title: " << title << ", Author: " << author << ", Available: " << (isAvailable ? "Yes": "No") << std::endl;
}