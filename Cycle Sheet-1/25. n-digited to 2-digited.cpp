#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,a[100],i,b[50],sum=0;
    printf("Enter the number of digits to be entered");
    scanf("%d",&n);
    printf("Enter a number");
    scanf("%d",&x);
    for(i=n-1;i>=0;i--)
    {
       a[i]=x%10;
       x=x/10;
    }
    if(n%2==0)
    {
       for(i=0;i<n;i=i+2)
       {
          b[i/2]=a[i]*10+a[i+1];
       }
    }
    else
    {
       for(i=0;i<n-1;i=i+2)
       {
          b[i/2]=a[i]*10+a[i+1];
       }
    }
    for(i=0;i<(n/2);i++)
    {
       sum=sum+b[i];
    }
    printf("sum of 2-digited numbers is %d",sum);
    getch();
    return 0;
}
    
           
       
