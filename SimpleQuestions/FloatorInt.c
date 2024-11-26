#include <stdio.h>

int main() {
    float num;

    printf("Enter a number: ");
    
    if (scanf("%f", &num) == 1) {
        // If the number has a decimal point, it's a float
        if ((int)num != num) {
            printf("The number is a float.\n");
        } else {
            printf("The number is an integer.\n");
        }
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
