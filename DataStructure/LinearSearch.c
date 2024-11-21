#include<stdio.h>

int LinearSearch(int arr[], int len, int target){
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == target)
        {
            printf("Target found and available at index : ");
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target : ");
    scanf("%d", &target);

    int result = LinearSearch(arr,n,target);

    printf("%d", result);

    return 0;
    }