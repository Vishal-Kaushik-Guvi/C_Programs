#include<stdio.h>

void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sum =0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    printf("%d \n", sum);
}