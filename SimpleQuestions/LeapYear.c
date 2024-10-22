#include<stdio.h>

int main(){
    int year;
    printf("Enter the Year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Year %d is a leap Year", year);
    }else{
        printf("Year %d is not a leap Year", year);
    }

    return 0;
}