#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float pi, pf, c;
    printf("enter the input power to the coupler");
    scanf("%f", &pi);
    printf("enter the Power coupled in the auxiliary arm in the forward direction");
    scanf("%f", &pf);
    c=10*log(pi/pf);
    printf("Coupling is %f", c);
    getch();
    return 0;
}
    
