#include <stdio.h>
#include <math.h>

int main(){
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < abs(2*n); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < abs(i-1); k++)
        {
            printf("*");
        }
        printf("\n");  
    }
    
}

//                                       left Space    Stars     RightSpace          
//    *                                      2           1          2
//   ***                                     1           3          1
//  *****                                    0           5          0
//   ***                                     1           3          1
//    *                                      2           1          2