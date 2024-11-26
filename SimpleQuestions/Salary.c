#include<conio.h>
#include<stdio.h>
void main()
{
    char name;
    int id;
    float basic_salary, allowances, deduction, gross_salary, net_salary;
    printf("Enter the name of employee: ");
    scanf("%s",&name);
    printf("Enter the id of employee: ");
    scanf("%d",&id);
    printf("Basic salary of employee: ");
    scanf("%f",&basic_salary);
    printf("Enter the total allowances: ");
    scanf("%f",&allowances);
    printf("Enter the total deduction: ");
    scanf("%f",&deduction);
    gross_salary=basic_salary+allowances;
    net_salary=gross_salary-deduction;
    printf("Salary Slip\n");
    printf("------------\n");
    printf("Name: %s\n",name);
    printf("Id:%d\n",id);
    printf("Basic salary: %f\n",basic_salary);
    printf("Allowances: %f\n",allowances);
    printf("Deduction: %f\n",deduction);
    printf("Gross salary %f\n",gross_salary);
    printf("Net salary %f\n",net_salary);
}