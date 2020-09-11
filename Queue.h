//
// Created by Alexander P on 20/09/10.
//

#ifndef C_REVIEW_QUEUE_H
#define C_REVIEW_QUEUE_H

#endif //C_REVIEW_QUEUE_H

typedef struct QNode {
    int integer;
    struct QNode *next;
} QNode;

typedef struct Queue {
    QNode *front, *rear;
    int size;
} Queue;

QNode *newQNode(int integer);

Queue *newQueue();

void enQueue(Queue *queue, int integer) ;

void deQueue(Queue *queue);

int peek(Queue *queue);

_Bool QueueIsEmpty(Queue *queue);

int QueueSize(Queue *queue);
