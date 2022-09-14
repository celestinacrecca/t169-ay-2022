#include <stdio.h>

int main()
{
    int a, b, sum, difference, product, quotient;
    printf("Enter the value of a:");
    scanf("%d", &a);
    
    printf("Enter the value of b:");
    scanf("%d", &b);
    
    sum= a+b;
    difference= a-b;
    product= a*b;
    quotient= a/b;
    
    printf("\nThe sum is = %d", sum);
    printf("\nThe difference is = %d", difference);
    printf("\nThe product is = %d", product);
    printf("\nThe quotient is = %d", quotient);
    
    return 0;
}
