#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Queue {
    struct Node* front;
    struct Node* rear;
} Queue;

void initializeQueue(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(Queue* q) {
    return q->front == NULL;
}

void enqueue(Queue* q, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed! Cannot enqueue %d.\n", value);
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (q->rear == NULL) {
        // If the queue is empty, front and rear both point to the new node
        q->front = q->rear = newNode;
    } else {
        // Otherwise, add the new node at the rear and update the rear pointer
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("Enqueued %d.\n", value);
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue underflow! Nothing to dequeue.\n");
        return -1;
    }

    int dequeuedValue = q->front->data;
    struct Node* temp = q->front;

    q->front = q->front->next;

    // If the queue becomes empty, set rear to NULL as well
    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp); // Free the memory of the dequeued node
    return dequeuedValue;
}

int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Nothing to peek.\n");
        return -1;
    }
    return q->front->data;
}

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

    // Free remaining nodes
    while (!isEmpty(&q)) {
        dequeue(&q);
    }

    return 0;
}
