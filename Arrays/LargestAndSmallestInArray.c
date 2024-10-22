#include<stdio.h>

void Smallest(int arr[]){
    int smallest= 0;
for (int i = 0; i < 5; i++)
{
    for (int j = i+1; j < 5; j++)
    {
        if (arr[i]<arr[j])
        {
          smallest = arr[i];
        }
     }
   }
     printf("Smallest Element is : %d \n", smallest);
}

void Largest(int arr[]){
    int largest =0;
    for (int i = 0; i < 5; i++)
   {
    for (int j = i+1; j < 5; j++)
    {
        if (arr[i]>=arr[j])
        {
            largest = arr[i];
        }
     }
   } 
    printf("Largest Element is : %d \n", largest);
}


int main(){
int arr[] = {10,23,57,97,43};
Smallest(arr);
Largest(arr);
return 0;
}


