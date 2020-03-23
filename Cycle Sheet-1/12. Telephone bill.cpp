#include<stdio.h>
#include<conio.h>
int main()
{
    float calls,bill,charge=0;
    printf("Enter the total no of calls during the month");
    scanf("%f",&calls);
    if(calls>=100 && calls<200)
    {
         charge=calls;
    }
    else if(calls>=200 && calls<300)
    {
         charge=2*calls;
    }
    else if(calls>=300)
    {
        charge=3*calls;
    }
    else if(calls<100)
    {
        charge=0;
    }
    bill=300+charge;
    printf("Telephone bill=%f",bill);
    getch();
    return 0;
}
