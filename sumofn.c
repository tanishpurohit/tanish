#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d digits is %d",n,sum);
}