#include<stdio.h>

int main(){

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
           printf("It is not a Prime Number");
           break;
        }
        else
        {
            printf("It is a Prime Number");
            break;
        }
    }
}