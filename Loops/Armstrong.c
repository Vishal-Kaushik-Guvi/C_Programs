#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int armstrong = 0;
    int temp = num;

    while (num!=0)
    {
        int digit = num%10;
        armstrong += digit*digit*digit;
        num = num/10;
    }

    if (armstrong == temp)
    {
        printf("Number is an Armstrong");
    }else{
        printf("Number is not an Armstrong");
    }

    return 0;
}