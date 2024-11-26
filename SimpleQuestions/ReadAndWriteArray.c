#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reading input string

    printf("You entered: %s\n", str);  // Writing/printing the string

    return 0;
}
