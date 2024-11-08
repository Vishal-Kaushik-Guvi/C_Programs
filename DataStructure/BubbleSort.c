#include<stdbool.h>

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

bool swap = true;

while (swap)
{
    swap = false;
    for (int i = 0; i<n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
           int temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
            swap = true;
        }
    }
    if (swap == false)
    {
        break;
    }
}

printf("Array after Bubble sort \n");
for (int k = 0; k < n; k++)
{
    printf("%d ", arr[k]);
}

}