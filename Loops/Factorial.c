#include<stdio.h>

int main(){

    int num;
    printf("Enter the number you want factorial of : ");
    scanf("%d", &num);
    fflush(stdin);

    int fact = 1;

    while (num!=0)
    {
        fact = fact*num--;
    }

    printf("%d \n", fact);
    
    return 0;
}