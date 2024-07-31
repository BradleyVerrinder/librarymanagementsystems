#include "../include/Library.h"
#include <iostream>

int main(){
    Library library;

    int choice;

    do {
        std::cout << "Library Management System\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. View Books\n";
        std::cout << "3. Borrow Book\n";
        std::cout << "4. Return Book\n";
        std::cout << "5. Search Books\n";
        std::cout << "6. Save and Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                std::string title, author;
                std::cout << "Enter book ID: ";
                std::cin >> id;
                std::cin.ignore();  // Ignore newline left in buffer
                std::cout << "Enter book title: ";
                std::getline(std::cin, title);
                std::cout << "Enter book author: ";
                std::getline(std::cin, author);
                library.addBook(Book(id, title, author));
                break;
            }
            case 2:
                library.viewBooks();
                break;
            case 3: {
                int id;
                std::cout << "Enter book ID to borrow: ";
                std::cin >> id;
                library.borrowBook(id);
                break;
            }
            case 4: {
                int id;
                std::cout << "Enter book ID to return: ";
                std::cin >> id;
                library.returnBook(id);
                break;
            }
            case 5: {
                std::string title;
                std::cin.ignore();  // Ignore newline left in buffer
                std::cout << "Enter book title to search: ";
                std::getline(std::cin, title);
                library.searchBooks(title);
                break;
            }
            case 6:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
    }