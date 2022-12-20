#include <stdio.h>
int main()
{
    int a,b;
    printf("ENter a:");
    scanf("%d", &a );
    printf("ENter b:");
    scanf("%d", &b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("Swapped numbers= a is %d, b is %d",a,b);
    return 0;
}