//
// Created by Alexander P on 20/09/09.
//

#include <stdio.h>
#include "stdlib.h"
#include "Queue.h"

QNode *newQNode(int integer) {
    QNode *temp = (QNode *) malloc(sizeof(QNode));
//    temp->integer = (int *) malloc(sizeof(int));
    temp->integer = integer;
    temp->next = NULL;
    return temp;
}

Queue *newQueue() {
    Queue *queue = (Queue *) malloc(sizeof(Queue));
    queue->front = queue->rear = NULL;
    queue->size = 0;
    return queue;
}

void enQueue(Queue *queue, int integer) {
    // Create a new LL node
    QNode *temp = newQNode(integer);

    // If queue is empty, then new node is front and rear both
    if (!queue->rear) {
        queue->front = queue->rear = temp;
        queue->size = 1;
        return;
    }

    // Add the new node at the end of queue and change rear
    queue->rear->next = temp;
    queue->rear = temp;
    queue->size++;
}

void deQueue(Queue *queue) { // it's the same as pop()
    if (!queue->front)
        return;

    // Store previous front and move front one node ahead
    QNode *temp = queue->front;

    queue->front = queue->front->next;

    // If front becomes NULL, then change rear also as NULL
    if (!queue->front)
        queue->rear = NULL;

    free(temp);
    queue->size--;
}

int peek(Queue *queue) {
    return queue->front->integer;
}

_Bool QueueIsEmpty(Queue *queue) {
    return queue->size == 0;
}

int QueueSize(Queue *queue) {
    return queue->size;
}