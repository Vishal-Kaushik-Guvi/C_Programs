#include <stdio.h>

int main() {
    int len;
    
    printf("Enter the Length of Fibonacci: ");
    scanf("%d", &len);
    
    int first = 0;
    int second = 1;
    int next;

    if (len == 1) {
        printf("%d\n", first);
    }

    else if (len == 2) {
        printf("%d, %d\n", first, second);
        
    }

    else if (len > 2) {
        printf("%d, %d", first, second);

        for (int i = 2; i < len; i++) {
            next = first + second;
            first = second;
            second = next;
            printf(", %d", next); 
        }
        printf("\n");
    }

    return 0;
}
