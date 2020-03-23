#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,n;
    float sum=0;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         x=i*i*i;
         sum=sum+(1.0/x);
    }
    printf("Sum of the series is %f",sum);
    getch();
    return 0;
}
