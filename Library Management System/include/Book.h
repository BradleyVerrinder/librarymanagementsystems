#define BOOK_H
#include <string>


class Book {
    private:
        int id;
        std::string title;
        std::string author;
        bool isAvailable;

    public:
        // Constructor
        Book(int bookId, const std::string& bookTitle, const std::string& bookAuthor);

        //Getters
        int getId() const;
        std::string getTitle() const;
        std::string getAuthor() const;
        bool getIsAvailable() const;

        //Setters
        void setIsAvailable(bool availability);

        //Display book info
        void displayBookInfo() const;

};