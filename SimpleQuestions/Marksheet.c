#include<conio.h>
#include<stdio.h>
void main()
{
    char name, grade;
    float cn, c, dsa, csa, dbms, se, rollno, total, percentage;
    printf("MARKSHEET\n");
    printf("Name of the student:");
    scanf("%s",&name);
    printf("Roll No.:");
    scanf("%f",& rollno);
    printf("marks of Computer Networking:");
    scanf("%f",&cn);
    printf("marks of C language:");
    scanf("%f",&c);
    printf("marks of DSA:");
    scanf("%f",&dsa);
    printf("marks of CSA:");
    scanf("%f",&csa);
    printf("marks of DBMS:");
    scanf("%f",&dbms);
    printf("marks of Software Engineering:");
    scanf("%f",&se);
    total=cn+c+dsa+csa+dbms+se;
    percentage=(total/600)*100;
    printf("Total Marks:%f\n",total);
    printf("Percentage:%f\n",percentage);
    if (percentage>=90) {grade = 'A';}
    else if(percentage>=80) {grade = 'B';}
    else if(percentage>=70) {grade = 'C';}
    else if(percentage>=60) {grade = 'D';}
    else if(percentage>=35) {grade ='E';}
    else {grade = 'F';}
    printf("Grade:%c\n",grade);
}
