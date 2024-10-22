#include<stdio.h>

void AreaOfCircle(){
int radius = 4;
float pi = 3.14;
float area = pi*radius*radius;
printf("Area of circle : %f \n", area);
}

void AreaOfRectangle(int length, int width){
int area = length * width;
printf("Area of Rectangle : %d \n", area);
}

int main(){
int length;
printf("Enter the Length for rectangle ");
scanf("%d", &length);
int width;
printf("Enter the Width for rectangle ");
scanf("%d", &width);

AreaOfCircle();
AreaOfRectangle(length, width);
}