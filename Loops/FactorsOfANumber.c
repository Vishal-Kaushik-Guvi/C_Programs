#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int temp = num;

    printf("Factors are : ");
    while (num!=0)
    {
        if (temp%num == 0)
        {
            printf("%d ", num);
        }
        --num;
    } 
}