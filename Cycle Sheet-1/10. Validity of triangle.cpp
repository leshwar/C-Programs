#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,x,p;
    printf("Enter length of the sides of triangle");
    p:
    x=scanf("%f%f%f",&a,&b,&c);
    if(x==3)
    {
            if((a+b)>c)
            {
               printf("The triangle is valid");
            }
            else
            {
               printf("The triangle is invalid");
            }
    }           
    else
    {
            printf("Enter exactly three values");
            goto p;                   
    }
    getch();
    return 0;
}
