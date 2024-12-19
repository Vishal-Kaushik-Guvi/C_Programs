#include <stdio.h>
#include <stdlib.h>

// Define global variables for head and tail
struct Node* head = NULL;
struct Node* tail = NULL;

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Add a node to the circular linked list
void addNode(int data) {
    struct Node* newNode = createNode(data);
    if (tail == NULL) {
        head = tail = newNode;
        tail->next = head;  // Circular link
    } else {
        newNode->next = head;
        tail->next = newNode;
        tail = newNode;
    }
    printf("Node with value %d added.\n", data);
}

// Delete a node from the circular linked list
void deleteNode(int key) {
    if (tail == NULL) {
        printf("List is empty! Nothing to delete.\n");
        return;
    }

    struct Node *current = head, *prev = tail;

    if (head == tail && head->data == key) {  // Single node case
        free(head);
        head = tail = NULL;
        printf("Node with value %d deleted. List is now empty.\n", key);
        return;
    }

    do {
        if (current->data == key) {
            if (current == head) {  // Delete head
                head = head->next;
                tail->next = head;
            } else if (current == tail) {  // Delete tail
                tail = prev;
                tail->next = head;
            } else {  // Delete intermediate node
                prev->next = current->next;
            }
            free(current);
            printf("Node with value %d deleted.\n", key);
            return;
        }
        prev = current;
        current = current->next;
    } while (current != head);

    printf("Node with value %d not found!\n", key);
}

// Display the circular linked list
void displayList() {
    if (tail == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* current = head;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(head)\n");
}

int main() {
    int choice, value;

    do {
        printf("\nCircular Linked List Operations:\n");
        printf("1. Add Node\n");
        printf("2. Delete Node\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to add: ");
                scanf("%d", &value);
                addNode(value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;
            case 3:
                displayList();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
