#include<stdio.h>
#include<conio.h>
int main()
{
    int p,q,i,j,count=0;
    printf("Enter the two ranges greater than zero");
    scanf("%d%d",&p,&q);
    for(i=p+1;i<q;i++)
    {
       for(j=1;j<i;j++)
       {
          if(i%j==0)
          {             
             count=count+1;
          }
       }
       if(count==2)
       {
          printf("%d",i);
       }
    }
    getch();
    return 0;
}
