#include<stdio.h>

int simpleInterest(int principal, int roi, int time){
    int SI = (principal*roi*time)/100;
    printf("Simple Interest : ");
    return SI;
}

int main(){
 int principal;
 printf("Enter the Principal(Amount of Money) \n");
 scanf("%d", &principal);

 int roi;
 printf("Enter the rate of Interest \n");
 scanf("%d", &roi);

 int time;
 printf("Enter the time (in years) \n");
 scanf("%d", &time);

 int result = simpleInterest(principal,roi,time);
 printf("%d", result);

 return 0;
}