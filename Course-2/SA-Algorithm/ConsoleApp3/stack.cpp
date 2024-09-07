#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.hpp"

Book createBook(const char* title, const char* author, int year) {
    Book book;
    strncpy(book.title, title, sizeof(book.title) - 1);
    strncpy(book.author, author, sizeof(book.author) - 1);
    book.year = year;
    return book;
}

void initStack(Stack* stack) {
    stack->top = NULL;
}

void push(Stack* stack, Book book) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->book = book;
    newNode->next = stack->top;
    stack->top = newNode;
}

Book pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        exit(1);
    }
    Node* temp = stack->top;
    Book book = temp->book;
    stack->top = stack->top->next;
    free(temp);
    return book;
}

Book peek(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        exit(1);
    }
    return stack->top->book;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}