#include <stdio.h>

void main()
{
    int n;
    printf("Enter the Length of Array \n");
    scanf("%d", &n);
    int arr[n];

    int avg = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the %d Element: ", i);
        scanf("%d", &arr[i]);                
    }

    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
    }
    avg = sum/n;

    printf("Avergae :  %d \n", avg);
    
}