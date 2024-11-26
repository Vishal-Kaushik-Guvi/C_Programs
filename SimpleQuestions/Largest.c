#include<stdio.h>

int main(){
int a;
int b;
int c;

printf("Enter first number : \n");
scanf("%d", &a);

printf("Enter Second number : \n");
scanf("%d", &b);

printf("Enter Third number : \n");
scanf("%d", &c);

if (a>b && a>c)
{
    printf("%d is Larger than %d and %d", a , b, c);
}else if(b>a && b>c){
    printf("%d is Larger than %d and %d", b, a, c);
}else if(c>a && c>b){
    printf("%d is Larger than %d and %d", c, a, b);
}else {
    printf("All the numbers are same");
}

}