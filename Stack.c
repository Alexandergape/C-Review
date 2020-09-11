//
// Created by Alexander P on 20/09/10.
//

#include "Stack.h"
#include "stdlib.h"

int StackSize(Stack *stack) {
    return stack->size;
}

_Bool StackIsEmpty(Stack *stack) {
    return stack->size == 0;
}

Stack *newStack() {
    Stack *stack = (Stack *) malloc(sizeof(Stack));
    stack->top = stack->bottom = NULL;
    stack->size = 0;
    return stack;
}

SNode *newSNode(int integer) {
    SNode *node = (SNode *) malloc(sizeof(SNode));
    node->integer = integer;
    node->next = NULL;
    return node;
}

void push(Stack *stack, int integer) {
    SNode *temp = newSNode(integer);

    if (!stack->top) {
        stack->top = stack->bottom = temp;
        stack->size = 1;
        return;
    }

    temp->next=stack->top;
    stack->top=temp;
    stack->size++;
}

void pop(Stack *stack) {
    if (!stack->top) return;

    SNode *old = stack->top;
    stack->top = stack->top->next;

    if (!stack->top) stack->bottom = NULL;

    free(old);
    stack->size--;
}

int top(Stack *stack) {
    return stack->top->integer;
}
