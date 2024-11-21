#include<stdio.h>

void Largest(int arr[], int len){
   int left = 0;
   int right = len-1;

   while (left<=right)
   {
    if (arr[left]>arr[right])
    {
       right--;
    }else{
       left++;
    }
   }
   printf("Largest %d \n", arr[right]);
}

void Smallest(int arr[], int len){
   int left = 0;
   int right = len-1;

   while (left<=right)
   {
    if (arr[left]<arr[right])
    {
       right--;
    }else{
       left++;
    }
   }
   printf("Smallest %d \n", arr[right]);
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

Largest(arr, n);
Smallest(arr, n);
return 0;
}


