#include <stdio.h>

int main() {
    int choice;
    double temperature, converted;

    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);
        converted = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2lf\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        converted = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2lf\n", converted);
    } else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
