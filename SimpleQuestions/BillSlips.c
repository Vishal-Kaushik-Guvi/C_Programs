#include<conio.h>
#include<stdio.h>
void main()
{
    float price, discount_rate, tax_rate, total, discount_amount, tax_amount, final_amount;
    int quantity;
    printf("Enter the price: ");
    scanf("%f",&price);
    printf("Enter the quantity: ");
    scanf("%d",&quantity);
    total=price*quantity;
    printf("Enter the discount rate(in percentage): ");
    scanf("%f",&discount_rate);
    printf("Enter the tax rate(in percentage): ");
    scanf("%f",&tax_rate);
    discount_amount=(total*discount_rate)/100;
    tax_amount=(total*tax_rate)/100;
    
    final_amount=total+tax_amount-discount_amount;
    
    printf("Bill Summary\n ");
    printf("----------------\n");
    printf("price: %f\n ",price);
    printf("quantity: %d\n ",quantity);
    printf("total: %f\n ",total);
    printf("discount amount: %f\n ",discount_amount);
    printf("tax amount: %f\n ",tax_amount);
    printf("final amount: %f\n ",final_amount);
}