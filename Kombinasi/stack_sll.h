#ifndef STACK_SLL_H
#define STACK_SLL_H

typedef struct StackNode {
    int id;
    char namaPesanan[50];
    struct StackNode *next;
} StackNode;

typedef struct {
    StackNode *top;
} Stack;

typedef struct HistoriNode {
    int id;
    char namaPesanan[50];
    struct HistoriNode *next;
} HistoriNode;

typedef struct {
    HistoriNode *head;
} Histori;

void initStack(Stack *s);
void push(Stack *s, int id, char *namaPesanan);
void pop(Stack *s);
void printStack(Stack *s);
int isStackEmpty(Stack *s);

void initHistori(Histori *h);
void addHistori(Histori *h, int id, char *namaPesanan);
void printHistori(Histori *h);

#endif