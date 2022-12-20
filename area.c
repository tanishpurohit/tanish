#include<stdio.h>
#include <math.h>
int main()
{
    float radius,area,pi;
    pi=3.14;
    printf("ENter radius of circle:");
    scanf("%f",&radius);
    area=pi*(pow(radius,2));
    printf("Area of circle of radius %.2f is %.2f sq. units",radius,area);
    return 0;
}