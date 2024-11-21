#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;  
    int n, new_size, i;

    // Initial memory allocation
    printf("Enter the initial number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int)); // Allocate memory using malloc

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Initial elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocate memory
    printf("Enter the new number of elements: ");
    scanf("%d", &new_size);

    arr = (int *)realloc(arr, new_size * sizeof(int)); // Resize the memory block

    // Check if memory reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initialize new elements (if size increased)
    if (new_size > n) {
        printf("Enter %d new elements:\n", new_size - n);
        for (i = n; i < new_size; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("Updated elements:\n");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    printf("Memory has been freed.\n");

    return 0;
}
