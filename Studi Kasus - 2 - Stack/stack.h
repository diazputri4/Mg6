#ifndef STACK_H
#define STACK_H

#include "boolean.h"
#include "node.h"

typedef struct {
    address top;
} Stack;

void createStack(Stack *s);
boolean isEmpty(Stack s);
void push(Stack *s, int data);
int pop(Stack *s);
void printStack(Stack s);

#endif
