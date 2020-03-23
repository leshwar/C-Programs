#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,h;
    printf("Enter the base");
    scanf("%f",&b);
    printf("Enter the height");
    scanf("%f",&h);
    a=0.5*b*h;
    printf("Area of triangle is %f",a);
    getch();
    return 0;
} 
