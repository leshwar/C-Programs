#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a[4],x,count=0;
    printf("Enter the 4-digit binary number");
    scanf("%d",&n);
    for(i=0;i<4;i++)
    {
        x=n%10;
        a[i]=x;
        n=n/10;
        if(a[i]==1)
        {
            count=count+1;
        }
    }
    if(count%2==0)
    {
        printf("Parity bit is 0");
    }
    else
    {
        printf("Parity bit is 1");
    }
    getch();
    return 0;
}
