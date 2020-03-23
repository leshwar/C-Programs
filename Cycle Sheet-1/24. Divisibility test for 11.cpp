#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100],o=0,e=0,d;
    X:
    printf("Enter the number atleast 3-digited");
    scanf("%d",&n);
    if(n>=100)
    {
       for(i=0;i<=100;i++)
       {
           a[i]=n%10;
           n=n/10;
       }
       for(i=0;i<100;i=i+2)
       {
           o=o+a[i];
           e=e+a[i+1];
       }
       if(o>=e)
       {
           d=o-e;
       }
       else
       {
           d=e-o;
       }
       if(d%11==0)
       {
           printf("The number is divisible by 11");
       }
       else
       {
           printf("The number is not divisible by 11");
       }
    }
    else
    {
        goto X;
    }
    getch();
    return 0;
}
       
     
                         
     
