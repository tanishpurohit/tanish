#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Positive number");
    }
    return 0;
}