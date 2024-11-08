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
    int arr[] = {10,20,50,40,30,67,54,34};
    int len = sizeof(arr)/sizeof(arr[0]);
    int target = 50;

    int result = LinearSearch(arr,len,target);

    printf("%d", result);

    return 0;
    }