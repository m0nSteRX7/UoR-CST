#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

using namespace std;

// Structure for a book
struct Book {
    string title;
    string author;
    int year;
    Book* next;
};

// Function prototypes
Book* AddBook(Book* head, const string& title, const string& author, int year);
void UpdateBook(Book* head, const string& title, const string& newTitle, const string& newAuthor, int newYear);
void DeleteBook(Book** head, const string& title);
void DeleteBooksBeforeYear(Book** head, int year);
void PrintList(Book* head);
Book* FindBookByYear(Book* head, int year);

#endif // BOOK_HPP