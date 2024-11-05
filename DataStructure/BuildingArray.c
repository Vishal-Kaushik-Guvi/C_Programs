#include <stdio.h>
#include <stdlib.h>

// Function to insert an element at a specific position
void insertAtPosition(int **arr, int *size, int element, int position) {
    if (position < 1 || position > *size + 1) {
        printf("Invalid position!\n");
        return;
    }

    // Increase the size of the array by 1
    *arr = realloc(*arr, (*size + 1) * sizeof(int));
    if (*arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i >= position - 1; i--) {
        (*arr)[i + 1] = (*arr)[i];
    }

    // Insert the new elemen
    (*arr)[position - 1] = element;
    (*size)++;  // Update the size of the array
}

// Function to delete an element from a specific position
void deleteAtPosition(int *arr, int *size, int position) {
    if (position < 1 || position > *size) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array by 1
    (*size)--;
    arr = realloc(arr, *size * sizeof(int)); // Resize the array to release extra memory
    if (arr == NULL && *size > 0) {
        printf("Memory allocation failed!\n");
        return;
    }
}

int main() {
    int *arr;
    int size, i, element, position, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert element at specific position\n");
        printf("2. Delete element from specific position\n");
        printf("3. Display array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert the element (1 to %d): ", size + 1);
                scanf("%d", &position);
                insertAtPosition(&arr, &size, element, position);
                break;
            case 2:
                printf("Enter the position to delete the element (1 to %d): ", size);
                scanf("%d", &position);
                deleteAtPosition(arr, &size, position);
                break;
            case 3:
                printf("Array elements are:\n");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 4:
                free(arr);
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    free(arr);
    return 0;
}
