#include <stdio.h>

int main() {
    char ch;
    char str[100];

    // Using getchar() and putchar()
    printf("Enter a single character: ");
    ch = getchar(); // Reads a single character
    printf("You entered: ");
    putchar(ch); // Outputs the single character
    putchar('\n'); // Print a newline for formatting

    // Clearing input buffer
    while (getchar() != '\n'); // Discard extra input if any

    // Using gets() and puts()
    printf("Enter a string (up to 99 characters): ");
    gets(str); // Reads a string
    printf("You entered: ");
    puts(str); // Outputs the string

    return 0;
}
