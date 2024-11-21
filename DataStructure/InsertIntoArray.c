#include <stdio.h>

int main() {
    int n, position, element;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }


    arr[position - 1] = element;

    printf("The updated array is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
