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

if (a>b && a<c)
{
    printf("%d is Second largest", a);
}else if(b>a && b<c){
     printf("%d is Second largest", b);
}else if(c>a && c<b){
     printf("%d is Second largest", c);
}else {
    printf("All the numbers are same");
}

}