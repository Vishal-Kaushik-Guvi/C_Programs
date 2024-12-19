#include <stdio.h>

int main() {
    int n, position;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &position);

    // Validate the position (0-based index).
    if (position < 0 || position >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to overwrite the element at the given position.
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array (size is reduced by 1).
    printf("The updated array is:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
