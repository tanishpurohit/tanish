#include <stdio.h>
int main()
{
    int a,count=0,i;
    printf("enter a number:");
    scanf("%d",&a);
    while(a>0)
    {
        count+=1;
        a=a/10;
    }
    printf("%d digits",count);
    return 0;
}