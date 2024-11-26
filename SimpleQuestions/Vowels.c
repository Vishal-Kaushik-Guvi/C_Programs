#include <stdio.h>

int main() {
    char str[100];
    int hasVowel = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            hasVowel = 1;
            break;
        }
    }

    if (hasVowel) {
        printf("The string contains vowels.\n");
    } else {
        printf("The string does not contain any vowels.\n");
    }

    return 0;
}
