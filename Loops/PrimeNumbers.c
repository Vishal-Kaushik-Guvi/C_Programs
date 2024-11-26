#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void printFirstNPrimes(int n) {
    int count = 0, num = 2;
    printf("The first %d prime numbers are: ", n);
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of prime numbers to display: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printFirstNPrimes(n);
    }

    return 0;
}
