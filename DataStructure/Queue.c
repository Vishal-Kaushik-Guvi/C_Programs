#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct Queue {
    int items[SIZE];
    int front, rear;
} Queue;

void initializeQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(Queue* q) {
    return q->front == -1;
}


int isFull(Queue* q) {
    return (q->rear + 1) % SIZE == q->front;
}

void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue overflow! Cannot add %d.\n", value);
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % SIZE;
    q->items[q->rear] = value;
    printf("Enqueued %d.\n", value);
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue underflow! Nothing to dequeue.\n");
        return -1;
    }

    int dequeuedValue = q->items[q->front];

    if (q->front == q->rear) {

        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }

    return dequeuedValue;
}

int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Nothing to peek.\n");
        return -1;
    }
    return q->items[q->front];
}

// Main function
int main() {
    Queue q;
    initializeQueue(&q);

    int choice, value;

    do {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Check if Queue is Empty\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                value = dequeue(&q);
                if (value != -1) {
                    printf("Dequeued value: %d\n", value);
                }
                break;
            case 3:
                value = peek(&q);
                if (value != -1) {
                    printf("Front value: %d\n", value);
                }
                break;
            case 4:
                if (isEmpty(&q)) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
