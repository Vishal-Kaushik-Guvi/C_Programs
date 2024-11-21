#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

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

void addNode(struct Node** tail, int data) {
    struct Node* newNode = createNode(data);
    if (*tail == NULL) {
        *tail = newNode;
        (*tail)->next = newNode;
    } else {
        newNode->next = (*tail)->next;
        (*tail)->next = newNode;
        *tail = newNode;
    }
    printf("Node with value %d added.\n", data);
}

void deleteNode(struct Node** tail, int key) {
    if (*tail == NULL) {
        printf("List is empty! Nothing to delete.\n");
        return;
    }

    struct Node *current = (*tail)->next, *prev = *tail;

    if ((*tail)->next == *tail && (*tail)->data == key) {
        free(*tail);
        *tail = NULL;
        printf("Node with value %d deleted. List is now empty.\n", key);
        return;
    }

    do {
        if (current->data == key) {
            if (current == *tail) {
                *tail = prev;
            }
            prev->next = current->next;
            free(current);
            printf("Node with value %d deleted.\n", key);
            return;
        }
        prev = current;
        current = current->next;
    } while (current != (*tail)->next);

    printf("Node with value %d not found!\n", key);
}

void displayList(struct Node* tail) {
    if (tail == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* current = tail->next;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != tail->next);
    printf("(head)\n");
}

int main() {
    struct Node* tail = NULL;
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
                addNode(&tail, value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&tail, value);
                break;
            case 3:
                displayList(tail);
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
