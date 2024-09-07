#include <iostream>
#include <cstring>
#include "book.hpp"
#include "print_list_avtor.hpp"

using namespace std;

// Show the menu
void ShowMenu() {
    cout << "Menu:" << endl;
    cout << "1. Add a book" << endl;
    cout << "2. Update a book" << endl;
    cout << "3. Delete a book" << endl;
    cout << "4. Delete books before a certain year" << endl;
    cout << "5. Print books by author" << endl;
    cout << "6. Print all books" << endl;
    cout << "7. Find book by year" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter your choice: ";
}

// Main function
int main() {
    Book* Head1 = nullptr;
    int choice;
    
    // Menu loop
    while (true) {
        ShowMenu();
        cin >> choice;
        cin.ignore(); // To ignore the newline character left in the buffer

        // Exit the program
        if (choice == 8) {
            break;
        }

        // Perform the selected operation
        switch (choice) {
            // Add a book
            case 1: {
                char title[50], author[21];
                int year;
                cout << "Enter book title: ";
                cin.getline(title, 50);
                cout << "Enter book author: ";
                cin.getline(author, 21);
                cout << "Enter book year: ";
                cin >> year;
                cin.ignore(); // To ignore the newline character left in the buffer
                Head1 = AddBook(Head1, title, author, year);
                break;
            }
            // Update a book
            case 2: {
                char bookTitle[50], newTitle[50], newAuthor[21];
                int newYear;
                cout << "Enter book title to update: ";
                cin.getline(bookTitle, 50);
                cout << "Enter new title: ";
                cin.getline(newTitle, 50);
                cout << "Enter new author: ";
                cin.getline(newAuthor, 21);
                cout << "Enter new year: ";
                cin >> newYear;
                cin.ignore(); // To ignore the newline character left in the buffer
                UpdateBook(Head1, bookTitle, newTitle, newAuthor, newYear);
                break;
            }
            // Delete a book
            case 3: {
                char bookTitle[50];
                cout << "Enter book title to delete: ";
                cin.getline(bookTitle, 50);
                DeleteBook(&Head1, bookTitle);
                break;
            }
            // Delete books before a certain year
            case 4: {
                int year;
                cout << "Enter year to delete books before: ";
                cin >> year;
                cin.ignore(); // To ignore the newline character left in the buffer
                DeleteBooksBeforeYear(&Head1, year);
                break;
            }
            // Print books by author
            case 5: {
                char authorName[21];
                cout << "Enter author name: ";
                cin.getline(authorName, 21);
                PrintListAvtor(authorName, Head1);
                break;
            }
            // Print all books
            case 6: {
                PrintList(Head1);
                break;
            }
            // Find book by year
            case 7: {
                int year;
                cout << "Enter year to find book: ";
                cin >> year;
                cin.ignore(); // To ignore the newline character left in the buffer
                Book* foundBook = FindBookByYear(Head1, year);
                if (foundBook != nullptr) {
                    cout << "Found book: " << foundBook->title << " by " << foundBook->author << endl;
                } else {
                    cout << "No book found for the year " << year << endl;
                }
                break;
            }
            // Invalid choice
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}