#include "book.hpp"
#include <iostream>

using namespace std;

// Add a book to the list
Book* AddBook(Book* head, const string& title, const string& author, int year) {
    Book* newBook = new Book;
    newBook->title = title;
    newBook->author = author;
    newBook->year = year;
    newBook->next = head;
    return newBook;
}

// Update a book in the list
void UpdateBook(Book* head, const string& title, const string& newTitle, const string& newAuthor, int newYear) {
    while (head != nullptr) {
        if (head->title == title) {
            head->title = newTitle;
            head->author = newAuthor;
            head->year = newYear;
            return;
        }
        head = head->next;
    }
}

// Delete a book from the list
void DeleteBook(Book** head, const string& title) {
    Book* current = *head;
    Book* previous = nullptr;

    while (current != nullptr) {
        if (current->title == title) {
            if (previous != nullptr) {
                previous->next = current->next;
            } else {
                *head = current->next;
            }
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}

// Delete books before a certain year
void DeleteBooksBeforeYear(Book** head, int year) {
    Book* current = *head;
    Book* previous = nullptr;

    while (current != nullptr) {
        if (current->year < year) {
            if (previous != nullptr) {
                previous->next = current->next;
            } else {
                *head = current->next;
            }
            Book* temp = current;
            current = current->next;
            delete temp;
        } else {
            previous = current;
            current = current->next;
        }
    }
}

// Print all books in the list
void PrintList(Book* head) {
    while (head != nullptr) {
        cout << "Title: " << head->title << ", Author: " << head->author << ", Year: " << head->year << endl;
        head = head->next;
    }
}

// Find a book by year
Book* FindBookByYear(Book* head, int year) {
    while (head != nullptr) {
        if (head->year == year) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}