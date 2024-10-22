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
int arr[] = {100,56,756,42,77,2,66,90};
int len = sizeof(arr)/sizeof(arr[0]);
Largest(arr, len);
Smallest(arr, len);
return 0;
}


