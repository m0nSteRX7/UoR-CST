#include "print_list_avtor.hpp"
#include <iostream>

using namespace std;

// Print books by author
void PrintListAvtor(const char* author, Book* head) {
    while (head != nullptr) {
        if (head->author == author) {
            cout << "Title: " << head->title << ", Author: " << head->author << ", Year: " << head->year << endl;
        }
        head = head->next;
    }
}