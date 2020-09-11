//
// Created by Alexander P on 20/09/10.
//

#ifndef C_REVIEW_STACK_H
#define C_REVIEW_STACK_H

typedef struct SNode {
    int integer;
    struct SNode *next;
} SNode;

typedef struct Stack {
    SNode *top, *bottom;
    int size;
} Stack;

int StackSize(Stack *stack);

_Bool StackIsEmpty(Stack *stack);

Stack *newStack();

SNode *newSNode(int integer);

void push(Stack *stack, int integer);

void pop(Stack *stack);

int top(Stack *stack);

#endif //C_REVIEW_STACK_H
