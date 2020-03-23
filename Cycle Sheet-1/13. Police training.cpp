#include<stdio.h>
#include<conio.h>
int main()
{
    float age,weight;
    printf("Enter your age and weight");
    scanf("%f%f",&age,&weight);
    if(age>20 && age<35 && weight>55 && weight<70)
    {
       printf("Eligible for police training");
    }
    else
    {
       printf("Not eligible");
    }
    getch();
    return 0;
}
