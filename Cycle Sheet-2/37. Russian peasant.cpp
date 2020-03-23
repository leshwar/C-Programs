#include<stdio.h>
#include<conio.h>
int main()
{
     int x,y,sum=0;
     printf("Enter the two nos. to be multiplied");
     scanf("%d%d",&x,&y);
     if((x%2)!=0)
     {
        sum=y;
     }
     while(x!=1)
     {
        x=x/2;
        y=y*2;
        if((x%2)!=0)
        {
           sum=sum+y;
        }
     }
     printf("The product is %d",sum);
     getch();
     return 0;
}
