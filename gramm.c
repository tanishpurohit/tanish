#include<stdio.h>
int main()
{
    int i,j,k,z=0;
    printf("\n enter the number:");
    scanf("%d", &j);
    for( i=j;i>0;)
    {
       k=i%10;
       z=z*10+k;
       i=i/10;
    }
    if(z==k)
     {
       printf("it's a palindrome");
     }
     else
     {
       printf("it's not a palindrome");
     }
     return 0;
}

    

