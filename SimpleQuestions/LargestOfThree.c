#include<stdio.h>

int main(){
    int a,b,c;
    
    printf("Enter First Number: ");
    scanf("%d", &a);
    fflush(stdin);  // Clear the input buffer after reading input

    printf("Enter Second Number: ");
    scanf("%d", &b);
    fflush(stdin);

    printf("Enter Third Number: ");
    scanf("%d", &c);
    fflush(stdin);

    // logic 

    if(a>b && a>c){
        printf("A is the largest");
    }else if(b>a && b>c){
        printf("B if the largest");
    }else if(c>a && c>b){
        printf("C is the Largest");
    }else {
        printf("All the numbers are same");
    }

    return 0;
}