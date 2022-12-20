#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter number:");
    scanf("%d",&a);
    while(a!=0)
    {
        i=a%10;
        sum=sum+i;
        a=a/10;
    }
    printf("sum of digits is %d",sum);
    return 0;
}