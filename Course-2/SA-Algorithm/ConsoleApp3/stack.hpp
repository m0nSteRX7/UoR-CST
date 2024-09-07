#ifndef STACK_H
#define STACK_H

typedef struct {
    char title[100];
    char author[100];
    int year;
} Book;

typedef struct Node {
    Book book;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

void initStack(Stack* stack);
void push(Stack* stack, Book book);
Book pop(Stack* stack);
Book peek(Stack* stack);
int isEmpty(Stack* stack);
Book createBook(const char* title, const char* author, int year);

#endif // STACK_H