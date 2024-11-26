#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    char *left, *right;

    printf("Enter a string: ");
    scanf("%99s", str);

    left = str;
    right = str + strlen(str) - 1;

    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
