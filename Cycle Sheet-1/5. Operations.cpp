#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x;
    printf("enter numA ");
    scanf("%f",&a);
    printf("enter numB ");
    scanf("%f",&b);
    printf("enter numC ");
    scanf("%f",&c);
    printf("enter numD ");
    scanf("%f",&d);
    x=(a*pow(10,7)+b*pow(10,-3))/(c*pow(10,5)-d*pow(10,7));
    printf("Answer is %f",x);
    getch();
    return 0;
} 
