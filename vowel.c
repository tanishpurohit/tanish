#include <stdio.h>
int main()
{
    char c,a,small,large;
    printf("Enter a character");
    scanf("%c",&c);
    small=(c=='a'||c=='e'||c=='o'||c=='i'||c=='u');
    large=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(small||large)
    {
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}