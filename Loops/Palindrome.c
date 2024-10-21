#include<stdio.h>

void main(){

    int num;
    printf("Enter the number you want to check Palindrome of : ");
    scanf("%d", &num);

    int palindrome = 0;
    int temp = num;

    while (num != 0)
    {
       int digit = num%10;
       palindrome = palindrome*10 + digit;
       num = num/10;
    }

    if (temp == palindrome)
    {
       printf("Yes the number is a Palindrome! ");
    }else{
       printf("Number is not a Palindrome! ");
    }
    
}