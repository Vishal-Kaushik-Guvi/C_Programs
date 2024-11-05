#include<stdio.h>

int main(){
    int n= 5;
    for (int i = 1; i <= n; i++)
    {
        int print = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", print);
            print++;
        }
        printf("\n");
    }
    
}
