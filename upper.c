#include<stdio.h>
int main()
{
    int upper,lower;
    char c;
    printf("Enter a char:");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("UpperCase");
    }
    else if(c>='a'&&c<='z')
    {
        printf("LowerCase");
    }
    else
    {
        printf("Special character");
    }
    return 0;
}