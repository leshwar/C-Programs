#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       sum=sum+i;
    printf("Triangular number is %d",sum);
    getch();
    return 0;
}   
