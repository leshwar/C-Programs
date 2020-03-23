#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,b,c,d,e,sum;
    printf("Enter the 5 numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    for(i=sum;sum>=0;i--)
    {
        if(i==a || i==b || i==c || i==d || i==e)
        {
            break;
        }  
    }
    printf("The largest number is % d\n",i);
    for(i=0;i<=sum;i++)
    {
       if(i==a || i==b || i==c || i==d || i==e)
        {
            break;
        }
    }
    printf("The smallest number is %d",i);  
    getch();
    return 0;
}
