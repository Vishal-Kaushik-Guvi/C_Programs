#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Declare head as a global variable
struct Node* head = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void insertAtBeginning(int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to insert after a specific node
void insertAfterNode(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("The given previous node cannot be NULL.\n");
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to delete a node with a specific value
void deleteNode(int key) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    // If the head node itself holds the key
    if (temp != NULL && temp->data == key) {
        head = temp->next; // Change head
        free(temp);        // Free old head
        return;
    }

    // Search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not found
    if (temp == NULL) {
        printf("Node with value %d not found.\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp); // Free memory
}

// Function to display the linked list
void displayList() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    // Perform operations
    insertAtBeginning(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtBeginning(0);

    printf("Linked List after insertions:\n");
    displayList();

    deleteNode(2);
    printf("Linked List after deletion of 2:\n");
    displayList();

    return 0;
}
