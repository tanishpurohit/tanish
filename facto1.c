#include <stdio.h>
int main()
{
    int a,n,fact=1;
   long product=1;
    printf("Enter a number: ");
    scanf("%d\n",&a);
    for(n=a;n>=1;n--)
    {
        product=n*(fact);
        fact*=product;
        
    }
    printf("Factorial of %d is %ld",a,fact);
    return 0;
}