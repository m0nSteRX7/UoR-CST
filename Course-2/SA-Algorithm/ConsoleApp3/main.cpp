#include <stdio.h>
#include <string.h>
#include "stack.hpp"

// Функция за извеждане на информацията за книгите в даден стек
void printBooksInStack(Stack* stack) {
    Stack tempStack;
    initStack(&tempStack);

    while (!isEmpty(stack)) {
        Book book = pop(stack);
        printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);
        push(&tempStack, book);
    }

    // Връщане на книгите обратно в оригиналния стек
    while (!isEmpty(&tempStack)) {
        push(stack, pop(&tempStack));
    }
}

// Функция за четене на информацията за книга от потребителя
void readBookFromUser(Stack* stack) {
    Book book;
    printf("Enter title: ");
    fgets(book.title, sizeof(book.title), stdin);
    printf("Enter author: ");
    fgets(book.author, sizeof(book.author), stdin);
    printf("Enter year: ");
    scanf("%d", &book.year);
    getchar(); // Премахване на новия ред от буфера

    push(stack, book);
}

int main() {
    Stack stack1, stack2;
    initStack(&stack1);
    initStack(&stack2);

    int n;
    printf("Enter number of books to add to stack 1: ");
    scanf("%d", &n);
    getchar(); // Премахване на новия ред от буфера

    for (int i = 0; i < n; i++) {
        readBookFromUser(&stack1);
    }

    printf("Enter number of books to add to stack 2: ");
    scanf("%d", &n);
    getchar(); // Премахване на новия ред от буфера

    for (int i = 0; i < n; i++) {
        readBookFromUser(&stack2);
    }

    printf("\nBooks in stack 1:\n");
    printBooksInStack(&stack1);

    printf("\nBooks in stack 2:\n");
    printBooksInStack(&stack2);

    return 0;
}