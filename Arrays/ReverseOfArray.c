#include<stdio.h>

void ReverseOfArray(int arr[],int n){
    int left = 0;
    int right = n-1;

    while (left<right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    printf("Array Reversed : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the Length of Array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the Elements of array:  \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ReverseOfArray(arr, n);

    return 0;
}