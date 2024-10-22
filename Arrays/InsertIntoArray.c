#include<stdio.h>

void InsertIntoArray(int arr[], int len){
    int num;
    printf("Value you want to insert into array ");
    scanf("%d", &num);

    arr[len+1] = num;
    len++;
    
    for (int i = 0; i < len; i++)
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
    InsertIntoArray(arr, n);
}