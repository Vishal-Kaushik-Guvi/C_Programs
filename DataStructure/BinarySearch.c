#include<stdio.h>

int BinarySearch(int arr[], int len, int target){
    int left =0;
    int right =len-1;

    while (left <= right)
    {
        int mid = left + (right - left)/2;

        if (target == arr[mid])
        {
            printf("Target found and available at index : ");
            return mid;
        }
        
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else{
            left = mid + 1;
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

    int result = BinarySearch(arr,n,target);
    printf("%d", result);

    return 0;
}