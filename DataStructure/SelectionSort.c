#include<stdio.h>

int main(){

int n;
printf("Enter the Length of array \n");
scanf("%d", &n);

int arr[n];

for (int k = 0; k < n; k++)
{
    printf("%d Element of array : ", k+1);
    scanf("%d", &arr[k]);
}

for (int i = 0; i < n ; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if (arr[i] > arr[j])
        {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
  }
}

printf("Array after Selection sort \n");
for (int k = 0; k < n; k++)
{
    printf("%d ", arr[k]);
}

return 0;
}
