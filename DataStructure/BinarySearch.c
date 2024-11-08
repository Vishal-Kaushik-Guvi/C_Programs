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
    int arr[] = {10,54,32,67,84,34,67,22,90};
    int len = sizeof(arr) / sizeof(arr[0]);
    int target = 67;

    int result = BinarySearch(arr,len,target);
    printf("%d", result);

    return 0;
}