#include<stdio.h>
int main()
{
    char c;
    int alpha,ch,digit;
    printf("Enter char:");
    scanf("%c",&c);
    if(c<='z'&&c>='a'|| c<='Z'&&c>='A')
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not alphabet");
    }
    return 0;
}