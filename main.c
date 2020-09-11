#include <stdio.h>
#include "Queue.h"
#include "Stack.h"

int main() {
    printf("Hello, World!\n");
    struct Queue *queue = newQueue();
    enQueue(queue, 10);
    printf("%d\n", queue->rear->integer);
    enQueue(queue, 9);
    enQueue(queue, 25);
    printf("%d\n", queue->rear->integer);

    deQueue(queue);
    printf("%d\n", queue->front->integer);

    deQueue(queue);
    printf("%d\n", queue->front->integer);

    printf("%d\n", peek(queue));


    printf("\nStacks...\n");
    Stack *stack = newStack();
    push(stack, 5);
    push(stack, 8);
    push(stack, 15);
    pop(stack); // 15 is deleted
    pop(stack); // 8 is deleted
//    pop(stack);


    if (StackSize(stack) > 0)
        printf("%d\n", top(stack));

    return 0;
}
